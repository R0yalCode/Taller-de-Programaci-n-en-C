// Inverso de un número con for
#include <stdio.h>

int main()
{
    int num, num_reverso = 0;
    // Mensaje de bienbenida
    printf("Estimado estudiante de la UNL\n");
    // Se solicita al estudiante ingresar un numero
    printf("Introduce un numero: ");
    scanf("%d", &num);// Se lee y se guarda el numero

    //se utiliza el bucle for para invertir el numero 
    for (; num != 0; num /= 10){
        //aqui se añade el ultimo digito de num a num_reverso    
        num_reverso = num_reverso * 10 + num % 10;
    }

    //se imprime el numero ya invertido
    printf("Su inverso es: %d\n", num_reverso);
    return 0;
}