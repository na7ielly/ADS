#include <stdio.h>

int main() 
{
    FILE *fp = fopen ("dados_fprintf_fscanf.txt", "w");  // Abre arquivo para escrita
    if (fp == NULL) {
        perror ("Erro ao abrir o arquivo");
        return 1;
    }
    // Escrevendo dados no arquivo
    fprintf (fp, "Nome: %s\nIdade: %d\n", "Alice", 25);
    fclose (fp);  // Fecha o arquivo após escrita
    // Abrindo o arquivo para leitura
    fp = fopen ("dados_fprintf_fscanf.txt", "r");
    if (fp == NULL) {
        perror ("Erro ao abrir o arquivo");
        return 1;
     }
    char nome[50];
    int idade;
    // Lendo dados do arquivo
    fscanf (fp, "Nome: %s\nIdade: %d\n", nome, &idade);
    printf ("Nome lido: %s\nIdade lida: %d\n", nome, idade);
    fclose (fp);  // Fecha o arquivo após leitura
    return 0;
}