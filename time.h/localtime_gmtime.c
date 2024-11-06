#include <stdio.h>
#include <time.h>

int main() 
{
    time_t agora = time(NULL);
    struct tm *tempo_local = localtime(&agora);
    printf ("Ano local: %d\n", 1900 + tempo_local -> tm_year);
    struct tm *tempo_utc = gmtime(&agora);
    printf ("Ano UTC: %d\n", 1900 + tempo_utc -> tm_year);
    return 0;
}