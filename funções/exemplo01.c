#include <stdio.h>

// Função void (executa uma ação e não retorna valor)
void imprimirMensagem() {
    printf ("Olá, esta é uma função void.\n");
}

// Função com retorno de valor (retorna um valor que pode ser usado)
int dobrar(int numero) {
    return numero * 2;
}

int main() {
// Chamando a função void
    imprimirMensagem();

    // Chamando a função com retorno e armazenando o resultado
    int resultado = dobrar(5);
    printf ("O dobro de 5 é: %d\n", resultado);

    return 0;
}
