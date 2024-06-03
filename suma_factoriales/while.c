// Calcular la suma de los factoriales de los primeros n números con While
#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    int result = 1;
    int i = 2;
    while (i <= num) {
        result *= i;
        i++;
    }
    return result;
}

int main() {
    int n;
    int suma = 0;
    int i = 1;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Se calcula la suma de los factoriales utilizando un bucle while
    while (i <= n) {
        suma += factorial(i);
        i++;
    }

    // Se presenta el resultado
    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma);
    return 0;
}