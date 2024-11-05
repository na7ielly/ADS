#include <stdio.h>
#include <string.h>

int main() 
{
    char destino[50] = "Olá, ";
    char origem[] = "mundo!";
    strcat (destino, origem);
    printf ("String concatenada: %s\n", destino);
    return 0;
}