#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char str[] = "3.14159";
    double num = atof (str);  // Converte a string para ponto flutuante
    printf ("Número de ponto flutuante: %f\n", num);  // Saída: 3.141590
    return 0;
}