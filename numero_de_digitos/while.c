// Número de dígitos de un número con While
#include <stdio.h>

int main() {
    int num, count = 0;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese un numero
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Se utliza el bucle while para contar el número de dígitos
    while (num != 0) {
        num /= 10;  // Se elimina el último dígito
        count++;    // Se incrementa el contador
    }

    // Se presenta el resultado
    printf("El numero de digitos es: %d\n", count);
    return 0;
}