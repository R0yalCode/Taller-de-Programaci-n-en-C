// Calcular la suma de los factoriales de los primeros n números con For
#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    int result = 1;
    for (int i = 2; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    int suma = 0;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Se calcula la suma de los factoriales utilizando un bucle for
    for (int i = 1; i <= n; ++i) {
        suma += factorial(i);
    }

    // Se presenta el resultado
    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma);
    return 0;
}