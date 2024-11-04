#include <stdio.h>

// Função que modifica o array
void dobrarValores(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        arr[i] *= 2; //O mesmo que: arr[i] = arr[i] * 2;
    }
}

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    for (int i = 0; i < tamanho; i++){
        printf ("Elemento %d: %d\n", i+1, numeros[i]);
    }

    dobrarValores (numeros, 5);

    printf ("\nDepois da função dobrarValores:\n");

    // Mostra os valores dobrados
    for (int i = 0; i < tamanho; i++) {
        printf ("Elemento %d: %d\n", i+1, numeros[i]);
    }
    return 0;
}