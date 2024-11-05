#include <stdio.h>

int main() 
{
    FILE *fp = fopen ("caracteres.txt", "w");
    if (fp == NULL) {
        perror ("Erro ao abrir o arquivo");
        return 1;
    }
    fputc ('A', fp);  // Escreve um caractere
    fputc ('B', fp);
    fclose (fp);
    fp = fopen ("caracteres.txt", "r");
    if (fp == NULL) {
        perror ("Erro ao abrir o arquivo");
        return 1;
    }
    int ch;
    while ((ch = fgetc (fp)) != EOF) {  // Lê cada caractere até o final
        putchar (ch);
    }
    fclose (fp);
    return 0;
}