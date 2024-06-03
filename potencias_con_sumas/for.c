// Potencia mediante sumas sucesivas con for
#include <stdio.h>

// Función para multiplicar dos números utilizando sumas sucesivas con for
int multiply(int a, int b)
{
    int result = 0;
    for (int i = 0; i < b; i++)
    {
        result += a; // Sumar 'a' a 'result', 'b' veces
    }
    return result;
}

// Función para calcular la potencia de un número utilizando como metodo de multiplicación con for
int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = multiply(result, base); // Multiplicar 'result' por 'base', 'exponent' veces
    }
    return result;
}

int main()
{
    int base, exponent;
    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese la base y el exponente
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponent);

    // Se calcula la potencia
    int result = power(base, exponent);

    // Se presenta el resultado
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}