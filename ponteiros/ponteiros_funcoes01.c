#include <stdio.h>

//Função para incrementar mais 1 a um número inteiro
void incrementar(int *num) 
{
    (*num)++; // Desreferencia e incrementa o valor apontado
}

int main() 
{
    int valor = 5;
    incrementar (&valor); //Valor = 6
    incrementar (&valor); //Valor = 7
    printf ("Valor incrementado: %d\n", valor); // Mostra 7
    return 0;
}