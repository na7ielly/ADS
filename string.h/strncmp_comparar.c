#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[] = "Hello";
    char str2[] = "Helicopter";
    if (strncmp(str1, str2, 3) == 0) {
        printf ("Os três primeiros caracteres de str1 e str2 são iguais.\n");
    } else {
        printf ("Os três primeiros caracteres de str1 e str2 são diferentes.\n");
    }
    return 0;
}