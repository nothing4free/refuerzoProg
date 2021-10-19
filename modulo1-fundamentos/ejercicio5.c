// Elabora el algoritmo que solicite la edad de 2 hermanos y muestre un mensaje indicando la edad del mayor y cuantos años de diferencia tiene con el menor.​

#include <stdio.h>

int main() {

    // variables
    int edadHermano1;
    int edadHermano2;
    int diferencia;

    // recoleccion de datos
    printf("Introduzca la edad del hermano 1: \n");
    scanf("%d", &edadHermano1);
    printf("Introduzca la edad del hermano 2: \n");
    scanf("%d", &edadHermano2);

    // calculo de la diferencia
    if(edadHermano1 > edadHermano2) {
        diferencia = edadHermano1 - edadHermano2;
    } else {
        diferencia = edadHermano2 - edadHermano1;
    }

    // mostramos el resultado
    printf("La diferencia de edades es de %d anios. \n", diferencia);

    return 0;
}