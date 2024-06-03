// Verificar si un número es primo con For
#include <stdio.h>

int main() {
    int num, i;
    int isPrimo = 1;  // Suponemos inicialmente que el número es primo

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Se comprueba si el número es primo
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrimo = 0;  // El número no es primo
            break;        // Salir del bucle si se encuentra un divisor
        }
    }

    // Se presenta el resultado
    if (isPrimo)
        printf("%d es un numero primo.\n", num); // si es verdadero
    else
        printf("%d no es un numero primo.\n", num); // si es falso

    return 0;
}