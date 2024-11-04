//VERIFICAÇÃO DO VALOR NUMÉRICO COM LOOPING

#include <stdio.h>

int main() {
    int numero;
    char resposta;

    do {
        // Solicita ao usuário que insira um número
        printf("Digite um número: ");
        scanf("%d", &numero);

        // Condicionais para verificar o valor do número
        if (numero > 0) {
            printf("O número é positivo.\n");
        } else if (numero < 0) {
            printf("O número é negativo.\n");
        } else {
            printf("O número é zero.\n");
        }

        // Pergunta ao usuário se ele quer continuar ou sair
        printf("Deseja inserir outro número? (s/n): ");
        scanf(" %c", &resposta); // espaço antes de %c para ignorar o enter

    } while (resposta == 's' || resposta == 'S');

    printf("Programa finalizado.\n");
    return 0;
}
