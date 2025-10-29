#include <stdio.h>
#include <math.h>

int main() {
    float numero, parteDecimal;
    int parteEntera;

    printf("Ingrese el número que desea descomponer: ");
    scanf("%f", &numero);

    parteEntera = (int)numero;            
    parteDecimal = numero - parteEntera;   

    printf("El número ingresado: %f tiene parte entera: %d y parte decimal: %f\n", numero, parteEntera, parteDecimal);

    return 0;
}
