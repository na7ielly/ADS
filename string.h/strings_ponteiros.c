#include <stdio.h>
#include <string.h>

int main() 
{
    char nome[] = "C Programming";
    char *ptr = nome;
    
    while (*ptr != '\0') {
    printf ("%c", *ptr);
    ptr++;
}
}