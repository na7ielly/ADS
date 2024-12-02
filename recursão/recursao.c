// Exemplos de código que usa recursão:

#include <stdio.h>

int fatorial(int num)
{
    if((num == 0) || (num == 1))
    {
        return 1;
    }
    else{
        return num * fatorial(num - 1);
    }
}

/* Fatorial main
int main()
{
    int num, resultado;
    printf("Fatorial n°: ");
    scanf("%d", &num);
    
    if (num < 0) // Tratamento para números negativos
    {
        printf("Não é possível calcular o fatorial de números negativos.\n");
        return 1;
    }

    resultado = fatorial(num);
    printf("Resultado fatorial: %d\n", resultado);

    return 0;
}
*/

// Seq. fibonacci: 0, 1, 1, 2, 3, 5, 8, ... 
int fibonacci(int p)
{
    if(p == 1)
    {
        return 0;
    }
    else if(p == 2)
    {
        return 1;
    }

    return fibonacci(p - 1) + fibonacci(p - 2);
}

/* Fibonacci main
int main()
{
    int num, resultado;
    printf("Fibonacci posição°: ");
    scanf("%d", &num);

    resultado = fibonacci(num);
    printf("Resultado: %d\n", resultado);

    return 0;
}
*/