#include <stdio.h>
#include <ctype.h>

int main() 
{
    char caractere = ' ';
    if (isspace(caractere)) {
        printf ("O caractere é um espaço em branco.\n");
    } else {
        printf ("O caractere não é um espaço em branco.\n");
    }
    return 0;
}