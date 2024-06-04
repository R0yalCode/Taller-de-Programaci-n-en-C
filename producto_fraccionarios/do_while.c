// Producto de una serie de números fraccionarios con Do While
#include <stdio.h>

int main() {
    int n;
    float producto = 1.0;
    int i = 1;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al esstudiante a que ingrese el valor de n
    printf("Introduce el valor de n: ");
    scanf("%d", &n);

    // Se utiliza el bucle do while para calcular el producto de la serie
    do {
        producto *= 1.0 / i;  // Multiplicar el término actual al producto
        i++;                  // Pasar al siguiente término
    } while (i <= n);

    // Se presenta el resultado
    printf("El producto de la serie hasta el termino %d es: %.2f\n", n, producto);
    return 0;
}