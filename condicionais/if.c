//VERIFICAÇÃO DO VALOR NUMÉRICO SEM LOOPING

#include <stdio.h>

int main() {
    int numero;

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

    return 0;
}
