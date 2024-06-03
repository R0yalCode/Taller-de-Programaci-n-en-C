// Sumar los números pares hasta n con While
#include <stdio.h>

int main() {
    int n, suma = 0;
    int i = 2;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Se utiliza el bucle while para calcular la suma de los números pares
    while (i <= n) {
        suma += i;  // Sumar el número par actual a la suma
        i += 2;     // Pasar al siguiente número par
    }

    // Se presenta el resultado
    printf("La suma de los numeros pares hasta %d es: %d\n", n, suma);
    return 0;
}