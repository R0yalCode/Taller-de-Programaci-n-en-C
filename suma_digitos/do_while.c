// Suma de los dígitos de un número con Do While
#include <stdio.h>

int main()
{
    int num, sum = 0;
    // Mensaje de bienvenida
    printf("Estimado estudiante de la UNL, te saluda Roy@l\n");
    // Se solicita al estudiante a que ingrese un número
    printf("Introduce un numero: ");
    scanf("%d", &num);

    // Se utiliza el bucle do while para calcular la suma de los dígitos
    if (num == 0)
    {
        sum = 0;
    }
    else
    {
        do
        {
            // Se añade el último dígito de num a sum
            sum += num % 10;
            // Se elimina el último dígito de num
            num /= 10;
        } while (num != 0); // Continua hasta que num sea 0
    }

    // Se presenta la suma de los dígitos
    printf("La suma de los digitos es: %d\n", sum);
    return 0;
}