#include <stdio.h>
#include <string.h>

int main() 
{
    char texto[] = "Olá, mundo maravilhoso!";
    char palavra[] = "mundo";
    char *resultado = strstr(texto, palavra); // Faz imprimir a parte de texto a partir de "mundo".

    if (resultado != NULL) {
        printf ("Substring encontrada: %s\n", resultado);
    } else {
        printf ("Substring não encontrada.\n");
    }
    return 0;
}