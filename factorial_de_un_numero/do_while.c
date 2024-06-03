// Factorial de un número con Do While
#include <stdio.h>

int main()
{
    int num, i = 1;
    unsigned long long factorial = 1;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Solicitar al estudiante a que inngrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Se comprueba si el número es negativo
    if (num < 0)
    {
        printf("El factorial de un numero negativo no existe.\n");
    }
    else
    {
        // Se utiliza el bucle do while para calcular el factorial
        if (num == 0)
        {
            // El factorial de 0 es 1
            factorial = 1;
        }
        else
        {
            do
            {
                factorial *= i; // Multiplicar factorial por i
                i++;
            } while (i <= num);
        }
        // Se presenta el resultado
        printf("El factorial de %d! es %llu\n", num, factorial);
    }

    return 0;
}