#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int main() 
{
    const char *str = "1234abc";
    char *endptr;
    long int num = strtol (str, &endptr, 10);
    
    if (endptr == str) {
        printf ("Nenhum número válido encontrado.\n");
    } else if (*endptr != '\0') {
        printf ("Parte numérica: %ld\n", num);
        printf ("Parte não numérica: %s\n", endptr);
    } else {
        printf ("Número convertido: %ld\n", num);
    }
    return 0;
}