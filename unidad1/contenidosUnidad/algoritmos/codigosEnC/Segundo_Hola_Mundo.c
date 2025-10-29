#include <stdio.h>
#include <stdlib.h>
                                   

int main () {

    /*    char nombresCompletos[50];
    //reservar memoria dinamica
    
    printf ("Ingerese sus nombres completos:\n ");
    scanf("%[^\n]s", nombresCompletos);
    getchar ();
    printf ("Sus nombres completos ingresados son: \n %s", nombresCompletos);
    return 0; */


    //Opcion 2, puntero al inicio de una cadena

    
    /* char * nombresCompletos = malloc(100 * sizeof (char));
    printf ("Ingerese sus nombres completos:\n ");
    scanf("%[^\n]s", nombresCompletos);
    getchar ();
    printf ("Sus nombres completos ingresados son: \n %s", nombresCompletos);
    return 0; */



    char * nombresCompletos = "Jeancarlos Fernando Aguirre Romero";
    printf ("Ingerese sus nombres completos:\n ");
    scanf("%[^\n]s", nombresCompletos);
    getchar ();
    printf ("Sus nombres completos ingresados son: \n %s", nombresCompletos);
    return 0;

}

