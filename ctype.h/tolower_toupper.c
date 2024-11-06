#include <stdio.h>
#include <ctype.h>

int main() 
{
    char letra = 'a';
    printf ("Maiúscula de %c: %c\n", letra, toupper(letra));
    letra = 'Z';
    printf ("Minúscula de %c: %c\n", letra, tolower(letra));
    return 0;
}