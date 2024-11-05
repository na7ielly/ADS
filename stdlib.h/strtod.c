#include <stdio.h>
#include <stdlib.h>

int main() 
{
    const char *str = "3.14159xyz";
    char *endptr;
    double num = strtod (str, &endptr);
    if (endptr == str) {
        printf ("Nenhum número válido encontrado.\n");
    } else if (*endptr != '\0') {
        printf ("Parte numérica: %f\n", num);
        printf ("Parte não numérica: %s\n", endptr);
    } else {
        printf ("Número convertido: %f\n", num);
    }
    return 0; 
}