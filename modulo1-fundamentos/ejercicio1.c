// calcular el algoritmo que determine si un numero es par o no

#include <stdio.h>

void main() {
    // variables: numero
    int numero;

    // fase de recoleccion de datos
    printf("Introduzca el numero a comprobar... \n");
    scanf("%d", &numero);

    // fase de comprobacion
    if((numero % 2) == 0) { // si el resto del numero entre 2 es 0, entonces es par; si no, es impar.
        printf("El numero %d es par. \n", numero);
    } else {
        printf("El numero %d es impar. \n", numero);
    }
}