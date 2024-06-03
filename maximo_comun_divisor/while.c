// Encontrar el MCD (Máximo Común Divisor) con While
#include <stdio.h>

// Función para calcular el MCD de dos números
int calcularMCD(int a, int b) {
    int mcd = 1;
    // Encontrar el menor de los dos números
    int menor = (a < b) ? a : b;
    int i = 1;

    // Se utiliza el bucle while para buscar el máximo común divisor
    while (i <= menor) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;  // Se actualiza el MCD
        }
        i++;
    }
    return mcd;
}

int main() {
    int num1, num2;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicitar al estudiante a que ingrese los números
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Calcular el MCD de los dos números
    int mcd = calcularMCD(num1, num2);

    // Se presenta el resultado
    printf("El Maximo comun Divisor de %d y %d es: %d\n", num1, num2, mcd);
    return 0;
}