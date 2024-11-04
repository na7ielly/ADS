//CALCULADORA

#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;
    char resposta;

    do {
        // Exibe o menu de opções
        printf("Escolha uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("Digite o número da operação desejada: ");
        scanf("%d", &opcao);

        // Solicita os números para a operação
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        // Usa switch-case para escolher a operação
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado da adição: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado da subtração: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado da multiplicação: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado da divisão: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisão por zero não é permitida.\n");
                }
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }

        // Pergunta ao usuário se ele quer realizar outra operação
        printf("Deseja realizar outra operação? (s/n): ");
        scanf(" %c", &resposta); // espaço antes de %c para ignorar o enter

    } while (resposta == 's' || resposta == 'S');

    printf("Programa finalizado.\n");
    return 0;
}
