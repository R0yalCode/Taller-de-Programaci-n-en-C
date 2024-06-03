// Serie de Fibonacci con While
#include <stdio.h>

int main()
{
    int n, i = 1;
    int t1 = 0, t2 = 1;
    int nextTerm;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el número de términos
    printf("Ingrerse el numero de terminos: ");
    scanf("%d", &n);

    printf("Serie de Fibonacci: ");

    // Se utiliza el bucle while para imprimir los primeros n términos de la serie de Fibonacci
    while (i <= n)
    {
        if (i == 1)
        {
            printf("%d, ", t1);
            i++;
            continue;
        }
        if (i == 2)
        {
            printf("%d, ", t2);
            i++;
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        printf("%d, ", nextTerm);
        i++;
    }

    return 0;
}