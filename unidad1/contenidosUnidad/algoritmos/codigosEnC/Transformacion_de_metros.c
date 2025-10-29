#include <stdio.h>

int main() {

    float metros, kilometros, centimetros, milimetros;

    printf("Ingrese su cantidad de metros: ");
    scanf("%f", &metros);


    kilometros = metros / 1000;
    centimetros = metros * 100;
    milimetros = metros * 1000;


    printf("La cantidad ingresada de metros: %f en kilometros es: %f en centimetros es: %f en milimetros es: %f\n", metros, kilometros, centimetros, milimetros);

    return 0;
}