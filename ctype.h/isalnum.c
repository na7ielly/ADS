#include <stdio.h>
#include <ctype.h>

int main() 
{
    char caractere = '9';
    if (isalnum(caractere)) {
        printf ("%c é alfanumérico.\n", caractere);
    } else {
        printf ("%c não é alfanumérico.\n", caractere);
    }
    return 0;
}