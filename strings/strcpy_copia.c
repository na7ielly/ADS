#include <stdio.h>
#include <string.h>

int main() 
{
    char origem[] = "Olá, mundo!";
    char destino[20];  // Certifique-se de que o destino tem espaço suficiente
    
    printf ("String origem: %s\n", origem);

    strcpy  (destino, origem);
    printf ("String copiada: %s\n", destino);
    return 0;
}