// Inverso de un número con Do While
#include <stdio.h>

int main()
{
    int num, num_reverso = 0;
    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");
    // SE Solicita al estudiante a que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &num);

    // Se utiliza el condicional if para ver si el numero es 0
    if (num == 0)
    {
        // Si el número es 0, el número invertido también es 0
        num_reverso = 0;
    }
    else
    {
        // Se utiliza el bucle do while para invertir el número
        do
        {
            // Aqui se añade el último dígito de num a num_reverso
            num_reverso = num_reverso * 10 + num % 10;
            // Aqui se elimina el último dígito de num
            num /= 10;
        } while (num != 0); // Se continua hasta que num sea 0
    }

    // Se presenta el número ya invertido
    printf("El numero invertido es: %d\n", num_reverso);
    return 0;
}