#include <stdio.h>

int numeroGlobal = 5; // Variável global

void usarVariavelLocal() {
    int numeroLocal = 10; // Variável local
    printf ("Variável local em usarVariavelLocal: %d\n", numeroLocal);
    numeroGlobal += 5; // Modifica a variável global
}

void usarVariavelGlobal() {
    printf ("Variável global em usarVariavelGlobal: %d\n", numeroGlobal);
}

int main() {
    printf ("Valor inicial da variável global em main: %d\n", numeroGlobal);
    usarVariavelLocal();
    usarVariavelGlobal();
    printf ("Valor da variável global após chamada das funções em main: %d\n", numeroGlobal);
    return 0;
}
