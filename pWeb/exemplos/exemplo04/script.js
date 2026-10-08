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