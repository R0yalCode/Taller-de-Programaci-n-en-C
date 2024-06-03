// Potencia mediante sumas sucesivas con Do While
#include <stdio.h>

// Función para multiplicar dos números utilizando sumas sucesivas con do while
int multiply(int a, int b)
{
    int result = 0;
    int i = 0;
    if (b == 0)
        return 0; // Si b es 0, el resultado es 0
    do
    {
        result += a; // Sumar 'a' a 'result', 'b' veces
        i++;
    } while (i < b);
    return result;
}

// Función para calcular la potencia de un número utilizando sumas sucesivas como metdodo de multiplicacion con do while
int power(int base, int exponent)
{
    int result = 1;
    int i = 0;
    if (exponent == 0)
        return 1; // Si el exponente es 0, el resultado es 1
    do
    {
        result = multiply(result, base); // Multiplicar 'result' por 'base', 'exponent' veces
        i++;
    } while (i < exponent);
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