#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char str[] = "1234567890";
    long int num = atol (str);  // Converte a string para inteiro longo
    printf ("Número longo: %ld\n", num);  // Saída: 1234567890
    return 0;
}