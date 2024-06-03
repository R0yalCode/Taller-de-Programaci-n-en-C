// Contar los números primos hasta n con Do While
#include <stdio.h>

// Para saber si un numero es primo
int esPrimo(int num) {
    if (num <= 1) return 0;  // No se considera primo
    int i = 2;
    do {
        if (num % i == 0) return 0;  // No es primo
        i++;
    } while (i * i <= num);
    return 1;  // Es primo
}

int main() {
    int n, contador = 0;
    int i = 1;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Solicitar al estudiante a que introduzca el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Contar números primos desde 1 hasta n
    do {
        if (esPrimo(i)) {
            contador++;  // Si el numero es primo el contador aumenta
        }
        i++;
    } while (i <= n);

    // Se presenta el resultado
    printf("Hay %d numeros primos desde 1 hasta %d\n", contador, n);
    return 0;
}