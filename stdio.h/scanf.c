#include <stdio.h>

int main() 
{
    int num;
    float valor;
    char nome[20];
    printf ("Digite um número inteiro, um número real e uma palavra: ");
    scanf ("%d %f %s", &num, &valor, nome);  // Lê int, float e string
    printf ("Inteiro: %d, Real: %.2f, Palavra: %s\n", num, valor, nome);
    return 0;
}