// Factorial de un número con While
#include <stdio.h>

int main()
{
    int num, i = 1;
    unsigned long long factorial = 1;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Se comprueba si el número es negativo
    if (num < 0)
    {
        printf("El factorial de un numero negativo no existe.\n");
    }
    else
    {
        // Se utiliza el bucle while para calcular el factorial
        while (i <= num)
        {
            factorial *= i; // Multiplicar factorial por i
            i++;
        }
        // Se presenta el resultado el resultado
        printf("El factorial de %d! es %llu\n", num, factorial);
    }

    return 0;
}