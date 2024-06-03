// Número de dígitos de un número con Do While
#include <stdio.h>

int main() {
    int num, count = 0;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Se utiliza el bucle do while para contar el número de dígitos
    do {
        num /= 10;  // Se elimina el último dígito
        count++;    // Se incrementa el contador
    } while (num != 0);

    // Se presenta el resultado
    printf("El numero de digitos es: %d\n", count);
    return 0;
}