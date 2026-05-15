from http.server import BaseHTTPRequestHandler, HTTPServer
from Smtpconn import SmtpConn
from env import EMAIL, PASS
import json
import logging

logging.basicConfig(level=logging.INFO)

# Tenta estabelecer a conexão com o e-mail logo ao subir o servidor
try:
    smtpConn = SmtpConn(EMAIL, PASS)
    print("Conectado com sucesso ao email.")
except Exception as e:
    print(f"Falhou ao conectar com Email: {e}")
    exit()

class SimpleHTTPRequestHandler(BaseHTTPRequestHandler):
    def do_POST(self):
        # Verifica se a rota é a raiz ("/")
        if self.path == "/":
            content_length = int(self.headers["Content-Length"])
            post_data = self.rfile.read(content_length)
            
            try:
                # Transforma o corpo da requisição em um formato que o Python entende (JSON)
                data = json.loads(post_data)
                
                # Chama a classe SmtpConn para enviar o e-mail
                response = smtpConn.sendMail(data["email"], data["subject"], data["message"])
                
                # Retorna o status de sucesso
                self._send_response(201, {"status": response.strip()})
            except json.JSONDecodeError:
                self._send_response(400, {"error": "JSON Inválido"})
            except KeyError:
                self._send_response(400, {"error": "Faltam parâmetros (email, subject, message)"})
        else:
            self._send_response(404, {"error": "Endpoint inválido"})

    # Método auxiliar para responder ao cliente
    def _send_response(self, status_code, body):
        self.send_response(status_code)
        self.send_header("Content-Type", "application/json")
        self.end_headers()
        self.wfile.write(json.dumps(body).encode("utf-8"))

# Inicialização do servidor na porta 8080
if __name__ == "__main__":
    server_address = ("", 8080)
    httpd = HTTPServer(server_address, SimpleHTTPRequestHandler)
    print("Servidor rodando em http://127.0.0.1:8080")
    httpd.serve_forever()