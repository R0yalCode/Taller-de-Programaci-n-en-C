// Suma de una serie aritmética con While
#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al usuario a que ingrese el número de términos
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

    // SE utiliza el bucle while para calcular la suma de los primeros n términos
    while (i <= n)
    {
        sum += i; // Se añade el valor de i a sum
        i++;
    }

    // Se presenta el resultado
    printf("La suma de los primeros %d terminos es %d\n", n, sum);
    return 0;
}