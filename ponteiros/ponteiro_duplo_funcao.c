#include <stdio.h>
#include <stdlib.h>

void alocaMemoria(int **ptr) 
{
    printf("Chamando alocaMemoria...\n");
    *ptr = (int*) malloc(sizeof(int) * 10); // Aloca memória para 10 inteiros

    if (*ptr == NULL) {
        printf("Erro: Falha na alocação de memória\n");
        return;
    }

    printf("Memória alocada para `*ptr` no endereço: %p\n", (void*)*ptr);
}

int main() 
{
    printf("Início do main...\n");

    int *arr = NULL;
    printf("Antes de alocaMemoria, arr aponta para: %p\n", (void*)arr);

    alocaMemoria(&arr); // Passa o endereço de `arr`
    printf("Depois de alocaMemoria, arr aponta para: %p\n", (void*)arr);

    // Inicializa o array e exibe os valores para verificação
    if (arr != NULL) {
        for (int i = 0; i < 10; i++) {
            arr[i] = i + 1; // Atribui valores de 1 a 10
            printf("arr[%d] = %d\n", i, arr[i]); // Exibe o valor atual
        }
    }

    free(arr); // Libera a memória alocada
    printf("Memória liberada para `arr`\n");

    return 0;
}