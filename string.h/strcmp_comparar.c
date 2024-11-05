#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[] = "Hello!";
    char str2[] = "Hello";
    char str3[] = "World";
    
    if (strcmp (str1, str2) == 0) {
        printf ("str1 e str2 são iguais.\n");
    } else {
        printf ("str1 e str2 são diferentes.\n");
    }
    if (strcmp (str1, str3) < 0) {
        printf ("str1 é menor que str3.\n");
    } else {
        printf ("str1 não é menor que str3.\n");
    }
    return 0;
}

//PS saída: "Hello!" é considerado menor que "World" na ordem lexicográfica 
//(baseada nos valores ASCII dos caracteres).