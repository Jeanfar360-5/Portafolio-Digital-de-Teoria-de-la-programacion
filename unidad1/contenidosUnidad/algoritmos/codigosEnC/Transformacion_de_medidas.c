//Transformacion_de_medidas.c

#include <stdio.h>
#include <string.h>
                                                

int main () {

    float pies;
    float yardas;
    float pulgadas;
    float centimetros;
    float metros;

    
    printf ("Ingerese su medida en pies para transformarla:\n ");
    scanf("%f", &pies);

    yardas = pies / 3 ;
    pulgadas = pies * 12 ;
    centimetros = pies * 2.54;
    metros = centimetros / 100;

    printf ("Los cantidad ingresada de pies: %f en yardas es: %f en pulgas es: %f en centimetros es: %f en metros es: %f\n",pies, yardas,pulgadas, centimetros, metros);
 
    return 0;

}
