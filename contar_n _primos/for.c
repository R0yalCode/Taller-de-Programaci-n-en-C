// Contar los números primos hasta n con For
#include <stdio.h>

// Para saber si un numero es primo
int esPrimo(int num) {
    if (num <= 1) return 0;  // No se considera primo
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  // No es primo
    }
    return 1;  // Es primo
}

int main() {
    int n, contador = 0;
    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que introduzca el valor de n
    printf("Introduce el valor de n: ");
    scanf("%d", &n);

    // Contar números primos desde 1 hasta n
    for (int i = 1; i <= n; i++) {
        if (esPrimo(i)) {
            contador++;  // Si es primo el contador aumenta
        }
    }

    // Presentar el resultado
    printf("Hay %d numeros primos desde 1 hasta %d\n", contador, n);
    return 0;
}