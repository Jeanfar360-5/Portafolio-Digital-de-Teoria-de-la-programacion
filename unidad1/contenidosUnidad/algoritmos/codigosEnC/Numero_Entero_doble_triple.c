//Numero_Entero_doble_triple.c

#include <stdio.h>
#include <string.h>
                                                

int main () {

    int numero;
    int doble;
    int triple;

    
    printf ("Ingerese el nnumero que desea duplicar y triplicar:\n ");
    scanf("%i", &numero);;

    doble = numero * 2;
    triple = numero * 3;

    printf ("El doble de su numero: %i es: %i Y su triple es: %i \n",numero, doble, triple);

    return 0;

}