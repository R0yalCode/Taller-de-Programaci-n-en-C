// Factorial de un número con For
#include <stdio.h>

int main()
{
    int num, i;
    unsigned long long factorial = 1;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &num);

    // Comprobar si el número es negativo
    if (num < 0)
    {
        printf("El factorial de un numero negativo no existe.\n");
    }
    else
    {
        // Se utiliza el bucle for para calcular el factorial
        for (i = 1; i <= num; i++)
        {
            factorial *= i; // Multiplicar factorial por i
        }
        // Se presenta el resultado
        printf("El factorial de %d! es %llu\n", num, factorial);
    }

    return 0;
}