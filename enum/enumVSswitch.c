#include <stdio.h>
#include <stdlib.h>

enum mes {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main()
{
    enum mes m;
    m = JAN; //Ou pedir para o usuário digitar um número de 1 a 12

    switch(m)
    {
        case JAN: printf("January\n"); break;
        case FEB: printf("February\n"); break;
        case MAR: printf("March\n"); break;
        case APR: printf("April\n"); break;
        case MAY: printf("May\n"); break;
        case JUN: printf("June\n"); break;
        case JUL: printf("July\n"); break;
        case AUG: printf("August\n"); break;
        case SEP: printf("September\n"); break;
        case OCT: printf("October\n"); break;
        case NOV: printf("November\n"); break;
        case DEC: printf("December\n"); break;
        default: printf("Invalid month\n");
    }
    return 0;
}
