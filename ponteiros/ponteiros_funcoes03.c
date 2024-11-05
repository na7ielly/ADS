#include <stdio.h>

void incrementar(int *num) {
    // Incrementa o valor apontado por `num`
    *num = *num + 1;
}

void trocar(int *a, int *b) {
    // Troca os valores entre `a` e `b`
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    printf("Valor de x antes de incrementar: %d\n", x);
    incrementar(&x); // Passa o endereço de `x`
    printf("Valor de x após incrementar: %d\n\n", x);

    printf("Valores antes de trocar:\n");
    printf("x = %d, y = %d\n", x, y);

    trocar(&x, &y); // Passa os endereços de `x` e `y`
    
    printf("Valores após trocar:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
