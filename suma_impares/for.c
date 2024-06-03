// Sumar los números impares hasta n con For#include <stdio.h>

int main() {
    int n, suma = 0;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Se utiliza el bucle for para calcular la suma de los números impares
    for (int i = 1; i <= n; i += 2) {
        suma += i;  // Sumar el número impar actual a la suma
    }

    // Se presenta el resultado el resultado
    printf("La suma de los numeros impares hasta %d es: %d\n", n, suma);
    return 0;
}