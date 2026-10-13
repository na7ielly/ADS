function entrar(identificacao) {
    const area = document.getElementById(identificacao);
    const texto = prompt('Qual é o seu nome?');
    if (texto === null || texto.trim() === '') {   // cancelou ou deixou vazio
        area.innerHTML = 'Bem-vindo...';
    } else {
        area.innerHTML = 'Bem-vindo ' + texto;
    }
}

function dia(diaDaSemana){
    const area02 = document.getElementById(diaDaSemana);
    const numero = Number(prompt('Digite de 1 a 7'));
    let nome;

    switch (numero) {
        case 1:
        case 7:
            nome = 'Fim de semana';
            break;
        case 2:
            nome = 'Segunda-feira';
            break;
     default:
        nome = 'Outro dia útil ou valor inválido';
    }
    alert(nome);
}

function senha(testeSenha){
    const area03 = document.getElementById(testeSenha);
    let senha = '';

    while (senha !== '123'){
        senha = prompt('Digite a senha:');
    }
}

function positivo (numeroPositivo){

    let numero = '';

    do {
        numero = prompt('Digite um número positivo:');
    } while (Number(numero) <= 0);
}

function somadorDinamico(idElemento) {
    const area05 = document.getElementById(idElemento);
    let soma = 0;
    let numerosSomados = ""; // Para guardar o histórico do que foi somado

    // Um loop "infinito" que só será parado pelo 'break'
    while (true) {
        let entrada = prompt("Digite um número positivo para somar.\nDigite números negativos para ignorá-los.\nDigite 0 para SAIR e ver o resultado.");
        
        // Se o usuário clicar em "Cancelar" no prompt, paramos tudo também
        if (entrada === null) {
            break; 
        }

        let numero = Number(entrada);

        // REGRA 1: Uso do BREAK
        // Se o número for 0, o loop para imediatamente.
        if (numero === 0) {
            alert("Você digitou 0. Encerrando as somas!");
            break; 
        }

        // REGRA 2: Uso do CONTINUE
        // Se o número for negativo, pulamos para a próxima repetição.
        // O código abaixo do continue não será executado nesta volta!
        if (numero < 0) {
            alert(`O número ${numero} é negativo e foi ignorado.`);
            continue; 
        }

        // Se chegou até aqui, é porque não caiu no break e nem no continue
        if (!isNaN(numero)) {
            soma += numero;
            numerosSomados += numero + " ";
        } else {
            alert("Por favor, digite um número válido!");
        }
    }

    // Só atualiza a tela depois que o 'break' é acionado e o loop acaba
    if (numerosSomados === "") {
        area05.innerHTML = "Nenhum número válido foi somado.";
    } else {
        area05.innerHTML = `Números somados: [ ${numerosSomados}] <br> <strong>Total: ${soma}</strong>`;
    }
}

function testarTernario(idElemento) {
    const area06 = document.getElementById(idElemento);
    const entrada = prompt('Qual é a sua idade?');
    
    // Verifica se o usuário cancelou ou deixou vazio
    if (entrada === null || entrada.trim() === '') {
        area06.innerHTML = 'Operação cancelada.';
        return; 
    }

    const idade = Number(entrada);

    // USO DO OPERADOR TERNÁRIO AQUI:
    // Lê-se: A idade é maior ou igual a 18? 
    // Se sim (?), retorne 'Maior de idade'. Se não (:), retorne 'Menor de idade'.
    const resultado = (idade >= 18) ? 'Você é MAIOR de idade.' : 'Você é MENOR de idade.';

    area06.innerHTML = resultado;
}

function testarPessoaFrutas(idElemento) {
    const area = document.getElementById(idElemento);
    let resultadoHTML = "";

    // 1. Exemplo do Objeto com for...in
    const pessoa = { nome: 'Bob', idade: 32 };
    resultadoHTML += "<h3>1. for...in (Objeto Pessoa):</h3><ul>";
    
    for (const chave in pessoa) {
        // Usando concatenação tradicional com o sinal de +
        resultadoHTML += "<li>" + chave + " = " + pessoa[chave] + "</li>";
    }
    resultadoHTML += "</ul>";

    // 2. Exemplo do Array com for...of
    const frutas = ['Maçã', 'Banana'];
    resultadoHTML += "<h3>2. for...of (Array Frutas):</h3><ul>";
    
    for (const fruta of frutas) {
        // Usando concatenação tradicional
        resultadoHTML += "<li>" + fruta + "</li>";
    }
    resultadoHTML += "</ul>";

    // 3. Exemplo da Função listarPropriedades
    function listarPropriedades(objeto, nome) {
        let textoLista = "";
        
        for (const prop in objeto) {
            // Usando concatenação tradicional (juntando os pedaços de texto e variáveis)
            textoLista += "<li>" + nome + "." + prop + " = " + objeto[prop] + "</li>";
        }
        return textoLista;
    }

    resultadoHTML += "<h3>3. Função listarPropriedades:</h3><ul>";
    resultadoHTML += listarPropriedades(pessoa, 'pessoa');
    resultadoHTML += "</ul>";

    // Finalmente, joga tudo construído para dentro da div na tela
    area.innerHTML = resultadoHTML;
}

function testarPares(pares){
    const area08 = document.getElementById(pares);

    let resultado = 0;

    for (let i = 0 ; resultado < 20; i++){
        resultado += 2;
        alert(resultado);
    }
}

function testarImparPar(numero){
    const area09 = document.getElementById(numero);

    const entrada = prompt('Digite um número:');

    if (entrada === null || entrada.trim() === ''){
        area09.innerHTML = 'Operação cancelada.';
        return;
    }

    const resultado = (entrada % 2 === 0 ) ? 'O número é PAR.' : 'O número é ÍMPAR.';
    area09.innerHTML = resultado;
}