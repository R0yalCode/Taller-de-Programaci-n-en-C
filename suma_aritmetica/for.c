// Suma de una serie aritmética con For
#include <stdio.h>

int main()
{
    int n, sum = 0;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el número de términos
    printf("Introduce el numero de terminos: ");
    scanf("%d", &n);

    // Se utiliza el bucle for para calcular la suma de los primeros n términos
    for (int i = 1; i <= n; i++)
    {
        sum += i; // Se añade el valor de i a sum
    }

    // Se prsenta el resultado
    printf("La suma de los primeros %d terminos es %d\n", n, sum);
    return 0;
}