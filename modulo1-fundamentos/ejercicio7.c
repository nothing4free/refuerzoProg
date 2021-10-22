// Elabora un algoritmo que sirva para identificar el tipo de triangulo conociendo sus tres lados

#include <stdio.h>

main() {

    // variables
    int lado1;
    int lado2;
    int lado3;

    // recoleccion de datos
    printf("Introduzca el lado 1: \n");
    scanf("%d", &lado1);
    printf("Introduzca el lado 2: \n");
    scanf("%d", &lado2);
    printf("Introduzca el lado 3: \n");
    scanf("%d", &lado3);

    // comprobamos que tipo de triangulo es y lo mostramos por pantalla
    if((lado1 != lado2) && (lado2 != lado3) && (lado1 != lado3)) {
        printf("El triangulo es escaleno, pues todos sus lados son desiguales. \n");
    } else {
        if((lado1 == lado2) && (lado2 == lado3)) {
            printf("El triangulo es equilatero, pues todos sus lados son iguales. \n");
        } else {
            printf("El triangulo es isosceles, pues dos de sus lados son iguales. \n");
        }
    }

}