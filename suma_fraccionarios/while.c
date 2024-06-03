// Suma de una serie de números fraccionarios con While
#include <stdio.h>

int main() {
    int n;
    float suma = 0.0;
    int i = 1;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Se utiliza el bucle while para calcular la suma de la serie
    while (i <= n) {
        suma += 1.0 / i;  // Sumar el término actual a la suma
        i++;              // Pasar al siguiente término
    }

    // Se presenta el resultado
    printf("La suma de la serie hasta el termino %d es: %.2f\n", n, suma);
    return 0;
}