// Producto de una serie geométrica con Do While
#include <stdio.h>

int main() {
    int n;
    int i = 0;
    unsigned long long product = 1;  // Usamos unsigned long long para manejar números grandes
    int term = 2;  // Primer término de la serie geométrica

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Solicitar al usuario que introduzca el número de términos
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

    // Bucle do while para calcular el producto de los primeros n términos
    if (n > 0) {
        do {
            product *= term;  // Multiplicar product por el término actual
            term *= 2;  // El siguiente término es el doble del actual
            i++;
        } while (i < n);
    }

    // Imprimir el resultado
    printf("El producto de los primeros %d terminos de la serie geometrica es %llu\n", n, product);
    return 0;
}