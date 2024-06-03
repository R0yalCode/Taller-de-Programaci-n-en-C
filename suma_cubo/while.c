//  Suma de los cubos de los primeros n números con While
#include <stdio.h>

int main() {
    int n, suma = 0;
    int i = 1;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Se utiliza el bucle while para calcular la suma de los cubos de los primeros n números
    while (i <= n) {
        suma += i * i * i;  // Sumar el cubo del número actual a la suma
        i++;                // Pasar al siguiente número
    }

    // Se presenta el resultado
    printf("La suma de los cubos de los primeros %d numeros es: %d\n", n, suma);
    return 0;
}