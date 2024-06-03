// Contar los números primos hasta n con While
#include <stdio.h>

// Para saber si un numero es primo
int esPrimo(int num) {
    if (num <= 1) return 0;  // No se considera primo
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) return 0;  // No es primo
        i++;
    }
    return 1;  // Es primo
}

int main() {
    int n, contador = 0;
    int i = 1;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Solicitar al usuario que introduzca el valor de n
    printf("Introduce el valor de n: ");
    scanf("%d", &n);

    // Contar números primos desde 1 hasta n
    while (i <= n) {
        if (esPrimo(i)) {
            contador++;  // Si es primo contador aumenta
        }
        i++;
    }

    // Se Presenta el resultado
    printf("Hay %d numeros primos desde 1 hasta %d\n", contador, n);
    return 0;
}