const express = require("express");
const amqp = require("amqplib");
const app = express();

app.get("/", (req, res) => res.send("Orders Service rodando"));

app.post("/create", async (req, res) => {
  try {
    // Adicionamos guest:guest (usuário e senha padrões) e a porta 5672
    const conn = await amqp.connect("amqp://guest:guest@rabbitmq:5672");
    const ch = await conn.createChannel();
    const queue = "order_created";

    await ch.assertQueue(queue);
    const orderData = { order_id: 99, user_id: 1, product_id: 5 };
    
    ch.sendToQueue(queue, Buffer.from(JSON.stringify(orderData)));
    console.log("MENSAGEM ENVIADA:", orderData);
    
    setTimeout(() => conn.close(), 500);
    
    // Adicionamos um \n no final para o terminal não ficar grudado na resposta
    res.json({ status: "Sucesso", data: orderData });
  } catch (err) {
    // Agora o erro real vai aparecer no terminal onde o Docker está rodando
    console.error("🚨 ERRO AO CONECTAR NO RABBITMQ:", err.message);
    res.status(500).send("Erro no RabbitMQ\n");
  }
});

app.listen(3000, () => console.log("Orders na porta 3000"));