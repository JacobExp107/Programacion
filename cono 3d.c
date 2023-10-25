#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, z1, x2, y2, z2;
    float dist, hmax1, rmenor, volumen;
    char otroProducto;

    do {
        printf("Ingrese la primera coordenada x1 (p1):\n");
        scanf("%f", &x1);
        printf("Ingrese la segunda coordenada y1 (p2):\n");
        scanf("%f", &y1);
        printf("Ingrese la tercera coordenada z1 (p3):\n");
        scanf("%f", &z1);

        printf("Ahora ingrese los puntos de la coordenada del Centro:\n");
        printf("Ingrese la primera coordenada x2:\n");
        scanf("%f", &x2);
        printf("Ingrese la segunda coordenada y2:\n");
        scanf("%f", &y2);
        printf("Ingrese la tercera coordenada z2:\n");
        scanf("%f", &z2);

        dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
        printf("La distancia es: %.2f\n", dist);

        do {
            printf("Ingrese la altura (debe ser positiva):\n");
            scanf("%f", &hmax1);
            if (hmax1 < 0) {
                printf("La altura no puede ser negativa. Ingrese una altura positiva.\n");
            }
        } while (hmax1 < 0);

        rmenor = (0.75 * hmax1 * dist) / hmax1;
        volumen = (0.3 * 3.141592 * hmax1) * (pow(dist, 2) + pow(rmenor, 2) + (dist * rmenor));
        printf("El radio menor es: %.2f\n", rmenor);
        printf("El volumen del cono truncado es: %.2f\n", volumen);

        printf("¿Desea ingresar nuevos datos? (S/N): ");
        scanf(" %c", &otroProducto);
    } while (otroProducto == 'S' || otroProducto == 's');

    return 0;
}



