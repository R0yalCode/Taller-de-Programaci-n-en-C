// Suma de los dígitos de un número con for
#include <stdio.h>

int main()
{
    int num, sum = 0;
    // Mensaje de bienvenida
    printf("Estimado estudiante de la UNL\n");
    // Se solicita al estudiante a que introduzca un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Se utiliza el bucle for para calcular la suma de los dígitos
    for (; num != 0; num /= 10)
    {
        // Se añade el último dígito de num a sum
        sum += num % 10;
    }

    // Se presenta la suma de los dígitos
    printf("La suma de los digitos es: %d\n", sum);
    return 0;
}