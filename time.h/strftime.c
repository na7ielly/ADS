#include <stdio.h>
#include <time.h>

int main() 
{
    time_t agora = time(NULL);
    struct tm *tempo_local = localtime(&agora);
    char buffer[80];
    strftime (buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", tempo_local);
    printf ("Data e hora formatada: %s\n", buffer);
    return 0;
}