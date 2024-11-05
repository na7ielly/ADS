#include <stdio.h>

int main() 
{
    FILE *fp = fopen ("texto.txt", "w");
    if (fp == NULL) {
        perror ("Erro ao abrir o arquivo");
        return 1;
    }
    fputs ("Esta é uma linha de texto.\n", fp);
    fputs ("Esta é outra linha.\n", fp);
    fclose (fp);
    fp = fopen ("texto.txt", "r");
    if (fp == NULL) {
        perror ("Erro ao abrir o arquivo");
        return 1; 
    }
    char linha[100];
    while (fgets (linha, sizeof (linha), fp) != NULL) {
        printf ("%s", linha);  // Imprime cada linha
    }
    fclose (fp);
    return 0;
}