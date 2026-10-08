function entrar(identificacao){
	const area = document.getElementById(identificacao); //acha a div pelo id
	const texto = 'Bem-vindo ' + prompt('Qual é o seu nome?');
	area.innerHTML = texto;
}