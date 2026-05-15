from http.server import BaseHTTPRequestHandler, HTTPServer
from Smtpconn import SmtpConn
import json
import os # Biblioteca para ler os segredos protegidos

# Puxando as variáveis protegidas do painel Secrets do Replit
EMAIL = os.environ['EMAIL']
PASS = os.environ['PASS']

try:
    smtpConn = SmtpConn(EMAIL, PASS)
    print("Conectado com sucesso ao servidor SMTP do Google.")
except Exception as e:
    print(f"Falha ao conectar: {e}")
    exit()

class SimpleHTTPRequestHandler(BaseHTTPRequestHandler):
    def do_POST(self):
        if self.path == "/":
            content_length = int(self.headers["Content-Length"])
            post_data = self.rfile.read(content_length)
            
            try:
                data = json.loads(post_data)
                response = smtpConn.sendMail(data["email"], data["subject"], data["message"])
                self._send_response(201, {"status": response.strip()})
            except Exception as e:
                self._send_response(400, {"error": "Dados inválidos ou faltando."})

    def _send_response(self, status_code, body):
        self.send_response(status_code)
        self.send_header("Content-Type", "application/json")
        self.end_headers()
        self.wfile.write(json.dumps(body).encode("utf-8"))

if __name__ == "__main__":
    server_address = ("0.0.0.0", 8080) # 0.0.0.0 é necessário para rodar na nuvem
    httpd = HTTPServer(server_address, SimpleHTTPRequestHandler)
    print("Servidor API online!")
    httpd.serve_forever()