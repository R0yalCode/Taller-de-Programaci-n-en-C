// Serie de Fibonacci con Do While
#include <stdio.h>

int main()
{
    int n, i = 1;
    int t1 = 0, t2 = 1;
    int nextTerm;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el numero de términos
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

    printf("Serie de Fibonacci: ");

    // Bucle do while para imprimir los primeros n términos de la serie de Fibonacci
    if (n > 0)
    {
        do
        {
            if (i == 1)
            {
                printf("%d, ", t1);
            }
            else if (i == 2)
            {
                printf("%d, ", t2);
            }
            else
            {
                nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;
                printf("%d, ", nextTerm);
            }
            i++;
        } while (i <= n);
    }

    return 0;
}