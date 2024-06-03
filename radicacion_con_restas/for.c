// Radicación mediante restas sucesivas con For
#include <stdio.h>

// Función para calcular el cubo de un número
int cube(int x)
{
    return x * x * x;
}

// Función para calcular la raíz cúbica utilizando restas sucesivas con for
int cube_root(int num)
{
    int i;
    int sum = 0;
    for (i = 0; cube(i) <= num; i++)
    {
        sum = cube(i);
    }
    return i - 1; //  Retrocede uno, por que el indice actual a pasado del resultado
}

int main()
{
    int num;

    // Mensaje de Bienvenida
    printf("Estimado estudiante de la UNL\n");

    // Se solicita al estudiante a que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Se calcula la raíz cúbica
    int result = cube_root(num);

    // Se presenta el resultado
    printf("La raiz cubica de %d es: %d\n", num, result);
    return 0;
}