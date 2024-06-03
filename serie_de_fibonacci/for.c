// Serie de Fibonacci con For
#include <stdio.h>

int main()
{
    int n, i;
    int t1 = 0, t2 = 1;
    int nextTerm;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el número de términos
    printf("Introduce el numero de terminos: ");
    scanf("%d", &n);

    printf("Serie de Fibonacci: ");

    // Se utiliza el bucle for para imprimir los primeros n términos de la serie de Fibonacci
    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d, ", t1);
            continue;
        }
        if (i == 2)
        {
            printf("%d, ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        printf("%d, ", nextTerm);
    }

    return 0;
}