//TABUADA

#include <stdio.h>

int main() {
    int numero;
    char resposta;

    do {
        // Solicita ao usuário que insira um número
        printf("Digite um número para ver a tabuada: ");
        scanf("%d", &numero);

        // Usa o loop for para gerar a tabuada
        printf("Tabuada de %d:\n", numero);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        // Pergunta ao usuário se ele quer ver a tabuada de outro número
        printf("Deseja ver a tabuada de outro número? (s/n): ");
        scanf(" %c", &resposta); // espaço antes de %c para ignorar o enter

    } while (resposta == 's' || resposta == 'S');

    printf("Programa finalizado.\n");
    return 0;
}
