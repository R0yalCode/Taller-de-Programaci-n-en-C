// Sumar los números pares hasta n con For
#include <stdio.h>

int main() {
    int n, suma = 0;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese el valor de n
    printf("Ingrse el valor de n: ");
    scanf("%d", &n);

    // Se utiliza el bucle for para calcular la suma de los números pares
    for (int i = 2; i <= n; i += 2) {
        suma += i;  // Sumar el número par actual a la suma
    }

    // Se presenta el resultado
    printf("La suma de los numeros pares hasta %d es: %d\n", n, suma);
    return 0;
}