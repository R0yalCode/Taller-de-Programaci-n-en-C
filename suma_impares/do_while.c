// Sumar los números impares hasta n con Do While
#include <stdio.h>

int main() {
    int n, suma = 0;
    int i = 1;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicitar al estudiante a que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Se utiliza el bucle do while para calcular la suma de los números impares
    do {
        suma += i;  // Sumar el número impar actual a la suma
        i += 2;     // Pasar al siguiente número impar
    } while (i <= n);

    // Se presenta el resultado
    printf("La suma de los numeros impares hasta %d es: %d\n", n, suma);
    return 0;
}