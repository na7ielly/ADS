#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "Olá, mundo!";
    size_t comprimento = strlen(str);
    printf ("Comprimento da string: %zu\n", comprimento);
    return 0;
}