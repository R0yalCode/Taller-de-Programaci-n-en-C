// Número de dígitos de un número con For
#include <stdio.h>

int main() {
    int num, count = 0;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Se utiliza el bucle for para contar el número de dígitos
    for (; num != 0; num /= 10) {
        count++;  // Se incrementa el contador
    }

    // Se presenta el resultado
    printf("El numero de digitos es: %d\n", count);
    return 0;
}