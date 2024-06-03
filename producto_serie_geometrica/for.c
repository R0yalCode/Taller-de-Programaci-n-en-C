// Producto de una serie geométrica con For
#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;  // Usamos unsigned long long para manejar números grandes
    int term = 2;  // Primer término de la serie geométrica

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el número de términos
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

    // Bucle for para calcular el producto de los primeros n términos
    for (int i = 0; i < n; i++) {
        product *= term;  // Multiplicar product por el término actual
        term *= 2;  // El siguiente término es el doble del actual
    }

    // Imprimir el resultado
    printf("El producto de los primeros %d terminos de la serie geometrica es %llu\n", n, product);
    return 0;
}