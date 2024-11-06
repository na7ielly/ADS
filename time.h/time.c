#include <stdio.h>
#include <time.h>

int main() 
{
    time_t tempo_atual = time(NULL);  // Obtém o tempo atual em segundos
    printf ("Tempo atual em segundos desde 1970: %ld\n", tempo_atual);
    return 0;
}