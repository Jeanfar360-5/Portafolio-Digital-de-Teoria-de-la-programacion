#include <stdio.h>

int main() {
    float velocidadInicial, velocidadFinal, tiempo, aceleracion;

    printf("Ingrese la velocidad inicial (m/s): ");
    scanf("%f", &velocidadInicial);

    printf("Ingrese la velocidad final (m/s): ");
    scanf("%f", &velocidadFinal);

    printf("Ingrese el tiempo transcurrido (s): ");
    scanf("%f", &tiempo);

    aceleracion = (velocidadFinal - velocidadInicial) / tiempo;

    printf("la aceleracion total con los datos obtenidos es: %f \n", aceleracion);

    return 0;
}