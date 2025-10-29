#include <stdio.h>
#include <math.h> 

int main() {
    float x1, y1, x2, y2, distancia;

 
    printf("Ingrese las coordenadas del punto P1 (x1): ");
    scanf("%f", &x1);

    printf("Ingrese las coordenadas del punto P1 (y1): ");
    scanf("%f", &y1);

    printf("Ingrese las coordenadas del punto P2 (x2): ");
    scanf("%f", &x2);

    printf("Ingrese las coordenadas del punto P2 (y2): ");
    scanf("%f", &y2);


    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));


    printf("Los puntos P1(%.2f, %.2f) y P2(%.2f, %.2f) tienen una distancia de: %.4f\n",
           x1, y1, x2, y2, distancia);

    return 0;
}
