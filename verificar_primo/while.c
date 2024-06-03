// Verificar si un número es primo con While
#include <stdio.h>

int main() {
    int num, i = 2;
    int isPrime = 1;  // Suponemos inicialmente que el número es primo

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Se comprueba si el número es primo
    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = 0;  // El número no es primo
            break;        // Salir del bucle si se encuentra un divisor
        }
        i++;
    }

    // Se presenta el resultado
    if (isPrime)
        printf("%d es un numero primo.\n", num);
    else
        printf("%d no es un numero primo.\n", num);

    return 0;
}