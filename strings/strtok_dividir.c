#include <stdio.h>
#include <string.h>

int main() 
{
    char texto[] = "Olá mundo maravilhoso!";
    const char delimitador[] = " "; 
    char *token = strtok(texto, delimitador);

    int i = 1;
    
    while (token != NULL) {
        printf("Token %d: %s\n", i, token);
        token = strtok(NULL, delimitador);  // Passa NULL para continuar na mesma string
        i++;
    }
    return 0;
}