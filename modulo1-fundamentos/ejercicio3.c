// Calcular el algoritmo que determine la cifra de centenas, decenas y unidades de un número de 3 cifras (del 100 al 999)

#include <stdio.h>

void main() {

    // variables
    int numero;
    int centenas;
    int decenas;
    int unidades;

    // recoleccion de datos
    printf("Introduzca un numero entre 100 y 999: \n");
    scanf("%d", &numero);

    if((numero >= 100) && (numero <= 999)) { // comprobamos que el numero introducido este entre 100 y 999. Si se cumple, calculamos.

        // calculamos las decenas, centenas y unidades
        centenas = numero / 100;
        decenas = (numero - (centenas * 100)) / 10;
        unidades = (numero - (centenas * 100) - (decenas  * 10));

        // mostramos por pantalla el resultado
        printf("- Centenas de %d: %d \n", numero, centenas);
        printf("- Decenas de %d: %d \n", numero, decenas);
        printf("- Unidades de %d: %d \n", numero, unidades);

    } else { // si el numero no esta entre 100 y 999, entonces mostramos un mensaje de error
        printf("ERROR: El numero tiene que estar entre 100 y 999. \n");
    }

}