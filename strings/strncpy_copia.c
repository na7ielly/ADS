#include <stdio.h>
#include <string.h>

int main() 
{
    char origem[] = "Olá, mundo!";
    char destino[20];

    printf ("String origem: %s\n", origem);
    
    strncpy(destino, origem, 5);  // Copia apenas os 5 primeiros caracteres
    destino[5] = '\0';  // Garante que a string termina com '\0'
    printf ("String copiada parcialmente: %s\n", destino);
    return 0;
}