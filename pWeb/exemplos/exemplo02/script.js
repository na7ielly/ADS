// # Trocar a primeira aparição de <h1>: título principal
// document.querySelector('h1').textContent = 'Mudei pelo JavaScript!';

// # Transforma todos os <h1> da página e cria uma lista com eles
// let todosOsH1 = document.querySelectorAll('h1');

// # Como virou uma lista, é necessário modificar um a um
// todosOsH1[0].textContent = "Mudei o primeiro";
// todosOsH1[1].textContent = "Mudei o segundo";

// # E se quiser mudar tudo de uma vez?
let todosOsH1 = document.querySelectorAll('h1');

todosOsH1.forEach(function (titulo) {
    titulo.textContent = "Mudei todos"
});