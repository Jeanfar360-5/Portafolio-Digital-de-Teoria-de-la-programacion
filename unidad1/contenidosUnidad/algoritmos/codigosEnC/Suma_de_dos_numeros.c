#include <stdio.h>
#include <string.h>
                                                

int main () {

    float numeroUno;
    float numeroDos;
    float resultado;

    
    printf ("Ingerese su primer numero:\n ");
    scanf("%f", &numeroUno);
    printf ("Ingerese su segundo numero:\n ");
    scanf("%f", &numeroDos);

    resultado = numeroUno + numeroDos;

    printf ("La suma de %f y %f es: \n %f",numeroUno, numeroDos, resultado);

    return 0;

}