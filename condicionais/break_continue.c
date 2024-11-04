//Demonstra o uso de break e continue: esse programa imprime os números de 1 a 10, 
//mas pula o número 5 (usando continue) e para completamente 
//ao chegar ao número 8 (usando break).

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        // Usa continue para pular o número 5
        if (i == 5) {
            continue;
        }
        
        // Imprime o número
        printf("%d\n", i);

        // Usa break para parar o loop ao chegar ao número 8
        if (i == 8) {
            break;
        }
    }

    printf("Loop encerrado.\n");
    return 0;
}
