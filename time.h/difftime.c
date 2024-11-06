#include <stdio.h>
#include <time.h>

int main() 
{
    time_t inicio = time(NULL);  
    // Código que leva algum tempo para ser executado
    for (volatile long i = 0; i < 1000000000; i++);
    time_t fim = time(NULL);
    double diferenca = difftime(fim, inicio);
    printf ("Diferença de tempo: %.0f segundos\n", diferenca);
    return 0;
}