#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    // Define a semente com base no tempo atual
    // Se tirar essa função, toda vez que executar o programa vai aparecer
    // os mesmos números aleatórios
    srand(time(NULL)); 
    
    // Gera cinco números aleatórios
    for (int i = 0; i < 5; i++) {
        printf ("Número aleatório: %d\n", rand() % 100);  // Números entre 0 e 99
    }
    return 0;
}