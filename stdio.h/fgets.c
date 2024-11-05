#include <stdio.h>

int main() 
{
    char str[50];
    printf ("Digite uma frase: ");
    fgets (str, sizeof (str), stdin);  // Lê até 49 caracteres ou até o '\n'
    printf ("Você digitou: %s\n", str);
    return 0;
}