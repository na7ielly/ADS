#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];
    strcpy(nome, "C language"); // Copia "C language" para `nome`

    int comprimento = strlen(nome); // Retorna o comprimento de `nome`

    printf("Quantidade de letras: %d", comprimento);
}