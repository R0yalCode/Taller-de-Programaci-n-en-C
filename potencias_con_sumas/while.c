// Potencia mediante sumas sucesivas con While
#include <stdio.h>

// Función para multiplicar dos números utilizando sumas sucesivas con while
int multiply(int a, int b)
{
    int result = 0;
    int i = 0;
    while (i < b)
    {
        result += a; // Sumar 'a' a 'result', 'b' veces
        i++;
    }
    return result;
}

// Función para calcular la potencia de un número utilizando sumas sucesivas como metodo de multiplicación con while
int power(int base, int exponent)
{
    int result = 1;
    int i = 0;
    while (i < exponent)
    {
        result = multiply(result, base); // Multiplicar 'result' por 'base', 'exponent' veces
        i++;
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