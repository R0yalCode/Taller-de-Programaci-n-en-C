// Producto de una serie de números fraccionarios con For
#include <stdio.h>

int main() {
    int n;
    float producto = 1.0;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Se utiliza el bucle for para calcular el producto de la serie
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;  // Multiplicar el término actual al producto
    }

    // Se presenta el resultado
    printf("El producto de la serie hasta el termino %d es: %.2f\n", n, producto);
    return 0;
}