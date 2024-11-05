#include <stdio.h>

int numeroGlobal = 20; // Variável global, acessível por qualquer função

void minhaFuncao() {
    printf ("Valor da variável global em minhaFuncao: %d\n", numeroGlobal);
}

int main() {
    printf ("Valor da variável global em main: %d\n", numeroGlobal);
    minhaFuncao();

    numeroGlobal = 30; // Modificando o valor da variável global
    printf ("Novo valor da variável global em main: %d\n", numeroGlobal);
    return 0;
}
