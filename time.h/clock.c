#include <stdio.h>
#include <time.h>

int main() 
{
    clock_t inicio = clock();
    // Código que leva algum tempo para ser executado
    for (volatile long i = 0; i < 1000000000; i++);
    clock_t fim = clock();
    double tempo_execucao = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf ("Tempo de execução: %.2f segundos\n", tempo_execucao);
    return 0;
}