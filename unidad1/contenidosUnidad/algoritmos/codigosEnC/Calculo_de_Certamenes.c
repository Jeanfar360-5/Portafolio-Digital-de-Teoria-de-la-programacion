#include <stdio.h>

int main() {

    float certamen1, certamen2, notaLaboratorio, certamen3;

    printf("Ingrese la nota del certamen 1: ");
    scanf("%f", &certamen1);
    printf("Ingrese la nota del certamen 2: ");
    scanf("%f", &certamen2);
    printf("Ingrese la nota de laboratorio: ");
    scanf("%f", &notaLaboratorio);

    certamen3 = ((60 - (notaLaboratorio * 0.3)) / 0.7 * 3) - (certamen1 + certamen2);

    printf("La nota mínima necesaria en el tercer certamen para aprobar es: %f", certamen3);
    return 0;
}
