#include <stdio.h>

int main(){

    int arr[5] = {10, 20, 30, 40, 50}; // Declaração e inicialização do array
    int *ptr = arr; // Ponteiro apontando para o primeiro elemento do array

    printf("Valores originais do array:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(ptr + i)); // Acessando o array via ponteiro
    }
    
}