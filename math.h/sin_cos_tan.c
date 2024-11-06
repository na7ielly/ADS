#include <stdio.h>
#include <math.h>

int main() 
{
    double angulo = 3.14159 / 2;  // 90 graus em radianos
    printf ("Seno de 90 graus: %.2f\n", sin(angulo));
    printf ("Cosseno de 90 graus: %.2f\n", cos(angulo));
    printf ("Tangente de 90 graus: %.2f\n", tan(angulo));
    return 0; 
}