#include <stdio.h>

int main()
{
    char palavra [5] = {'N', 'a', 't', 'y'};
    char palavra1 [] = {'Y', 'u', 'r', 'i'};
    char palavra2 [5];

    for (int i = 0; i < 5; i++){
        printf ("%c", palavra[i]);
    }

    printf ("\n");

    for (int i = 0; i < 5; i++){   
        printf ("%c", palavra1[i]);
    }

    printf ("\n");

    for (int i = 0; i < 5; i++){
        printf ("%c", palavra2[i]);
    }

    printf ("\n");
}