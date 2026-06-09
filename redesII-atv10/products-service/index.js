const express = require("express");
const amqp = require("amqplib");
const app = express();

app.get("/", (req, res) => res.send("Products Service rodando"));

async function consume() {
  try {
    const conn = await amqp.connect("amqp://rabbitmq");
    const ch = await conn.createChannel();
    const queue = "order_created";

    await ch.assertQueue(queue);
    console.log("Products Service: Ouvindo fila...");

    ch.consume(queue, msg => {
      console.log("-> PRODUCTS verificando estoque para o pedido:", msg.content.toString());
      ch.ack(msg); 
    });
  } catch (err) {
    setTimeout(consume, 5000); 
  }
}

app.listen(3000, () => {
  console.log("Products na porta 3000");
  consume();
});