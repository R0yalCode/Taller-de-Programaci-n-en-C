//  Suma de los cubos de los primeros n números con For
#include <stdio.h>

int main() {
    int n, suma = 0;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al uestudiante a que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Se utiliza el bucle for para calcular la suma de los cubos de los primeros n números
    for (int i = 1; i <= n; i++) {
        suma += i * i * i;  // Sumar el cubo del número actual a la suma
    }

    // Se presenta el resultado
    printf("La suma de los cubos de los primeros %d numeros es: %d\n", n, suma);
    return 0;
}