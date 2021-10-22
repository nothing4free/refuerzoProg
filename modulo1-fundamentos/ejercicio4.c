// Elabora un algoritmo que solicite un número entero y diferente a cero, e indique si es par
// Este ejercicio es identico al ejercicio 1, pero esta vez comprobamos que el numero introducido cumpla con el enunciado.

#include <stdio.h>

void main() {
    // variables
    int numero;

    // fase de recoleccion de datos
    printf("Introduzca el numero a comprobar... \n");
    scanf("%d", &numero);

    // comprobamos la entrada del usuario
    if(numero > 0) { // si cumple con el enunciado, entonces pasamos a calcular si es par o impar.
    
        if((numero % 2) == 0) { // si el resto del numero entre 2 es 0, entonces es par; si no, es impar.
            printf("El numero %d es par. \n", numero);
        } else {
            printf("El numero %d es impar. \n", numero);
        }

    } else { // si no cumple con el enunciado, entonces mostramos un mensaje de error.
        printf("ERROR: introduzca un numero entero distinto de 0.\n");
    }
}