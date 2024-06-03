// Suma de los dígitos de un número con While
#include <stdio.h>

int main()
{
    int num, sum = 0;
    // Mensaje de bienvenida
    printf("Estimado estudiante de la UNL\n");
    // Se solicita al estudiante a que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Se utiliza el bucle while para calcular la suma de los dígitos
    while (num != 0)
    {
        // Se añade el último dígito de num a sum
        sum += num % 10;
        // Se elimina el último dígito de num
        num /= 10;
    }

    // Se presenta la suma de los dígitos
    printf("La suma de los digitos es: %d\n", sum);
    return 0;
}