#include <stdio.h>

int main ()
{
int x = 10;
int *ptr = &x;
int **ptr_ptr = &ptr;

printf ("Valor de x: %d\n", x);  // Acessando diretamente
printf ("Valor de x via ptr: %d\n", *ptr);   // Acessando via ponteiro simples
printf ("Valor de x via ptr_ptr: %d\n", **ptr_ptr); // Acessa o valor de x via ponteiro duplo
}