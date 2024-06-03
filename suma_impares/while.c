// Sumar los números impares hasta n con While#include <stdio.h>
#include <stdio.h>
int main() {
    int n, suma = 0;
    int i = 1;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Se utiliza el bucle while para calcular la suma de los números impares
    while (i <= n) {
        suma += i;  // Sumar el número impar actual a la suma
        i += 2;     // Pasar al siguiente número impar
    }

    // Se presenta el texto el resultado
    printf("La suma de los numeros impares hasta %d es: %d\n", n, suma);
    return 0;
}