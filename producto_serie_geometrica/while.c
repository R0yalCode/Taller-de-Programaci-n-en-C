// Producto de una serie geométrica con While
#include <stdio.h>

int main() {
    int n;
    int i = 0;
    unsigned long long product = 1;  // Usamos unsigned long long para manejar números grandes
    int term = 2;  // Primer término de la serie geométrica

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el numero de términos
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

    // Se utiliza el bucle while para calcular el producto de los primeros n términos
    while (i < n) {
        product *= term;  // Multiplicar product por el término actual
        term *= 2;  // El siguiente término es el doble del actual
        i++;
    }

    // Se presenta el resultado
    printf("El producto de los primeros %d terminos de la serie geometrica es %llu\n", n, product);
    return 0;
}