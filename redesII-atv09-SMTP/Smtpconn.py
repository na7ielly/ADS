import smtplib

class SmtpConn:
    def __init__(self, sourceMail, password):
        self.mail = sourceMail
        self.connection = smtplib.SMTP('smtp.gmail.com', 587)
        self.connection.ehlo()
        self.connection.starttls() # Exigência do Gmail para criptografia
        self.connection.login(self.mail, password)
  
    def sendMail(self, destinationMail, subject, message):
        try:
            msg = f"Subject: {subject}\n\n{message}"
            self.connection.sendmail(self.mail, destinationMail, msg)
            return "Email enviado com sucesso!\n"
        except Exception as e:
            return f"Erro ao enviar e-mail: {e}\n"