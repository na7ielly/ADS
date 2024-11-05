#include <stdio.h>

void minhaFuncao() {
    int numeroLocal = 10; // Variável local, acessível apenas dentro de `minhaFuncao`
    printf ("Valor da variável local: %d\n", numeroLocal);
}

int main() {
    minhaFuncao();
    //printf ("%d", numeroLocal); // Erro: `numeroLocal` não é acessível aqui
    return 0;
}
