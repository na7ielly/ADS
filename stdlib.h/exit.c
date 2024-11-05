#include <stdlib.h>
#include <stdio.h>

int main() 
{
    printf ("Executando um comando do sistema...\n");
    system ("ls");  // Executa o comando 'ls' no Unix (ou 'dir' no Windows)
    exit (0);
}