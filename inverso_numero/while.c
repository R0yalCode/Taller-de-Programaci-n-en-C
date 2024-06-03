// Inverso de un número con while
#include <stdio.h>

int main()
{
    int num, num_reverso = 0;
    //Mensaje de bienvenida 
    printf("Estimado estudiantes de la UNL\n");
    // Se solicita al estudiante a que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Se utiliza el bucle while para invertir el número
    while (num != 0)
    {
        // Aqui se añade el último dígito de num a num_reverso
        num_reverso = num_reverso * 10 + num % 10;
        // Aqui se elimina el último dígito de num
        num /= 10;
    }

    // Se presenta el número ya invertido
    printf("Su numero invertido es: %d\n", num_reverso);
    return 0;
}