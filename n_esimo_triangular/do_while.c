// Calcular el n-ésimo número triangular con Do While

#include <stdio.h>

int main() {
    int n;
    int triangular = 0;
    int i = 1;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Solicitar al usuario que introduzca el valor de n
    printf("Introduce el valor de n: ");
    scanf("%d", &n);

    // Se calcula el número triangular utilizando un bucle do while
    do {
        triangular += i;
        i++;
    } while (i <= n);

    // Se presenta el resultado
    printf("El %d-esimo numero triangular es: %d\n", n, triangular);
    return 0;
}