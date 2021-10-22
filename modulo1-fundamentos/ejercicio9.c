// Elabora un algoritmo que solicite 15 números enteros y diferentes a cero, e indique para cada uno si es par

#include <stdio.h>

void main() {

    // variables
    int numero;

    // pasamos al bucle que comprobara las condiciones del enunciado y determinara si es par o no
    for(int i = 0; i < 15; i++) { // bucle que se repetira 15 veces

        // recolectamos datos
        printf("Introduzca un numero distinto de 0: \n");
        scanf("%d", &numero);

        // comprobamos y determinamos
        if(numero > 0) {
            if((numero % 2) == 0) {
                printf("%d es par. \n", numero);
            } else {
                printf("%d es impar. \n", numero);
            }

        } else {
            printf("ERROR: el numero tiene que ser entero y diferente de 0.\n");
        }
    }
}