#include <stdio.h>

int main() 
{
    FILE *file = fopen ("exemplo.txt", "r");  // Abre para leitura
    if (file == NULL) {  // Verifica se o arquivo foi aberto corretamente
        perror ("Erro ao abrir o arquivo");
        return 1;
    }
    char linha[100];
    while (fgets (linha, sizeof (linha), file) != NULL) {  // Lê linha por linha
        printf ("%s", linha);  // Exibe a linha no console
    }
    fclose (file);  // Fecha o arquivo após a leitura
    return 0;
}