#include <stdio.h>
#include <string.h>

int main() 
{
    char destino[50] = "Olá, ";
    char origem[] = "mundo maravilhoso!";
    strncat (destino, origem, 5);  // Concatena apenas os 5 primeiros caracteres de origem
    printf ("String concatenada parcialmente: %s\n", destino);
    return 0;
}