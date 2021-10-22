// Elaborar un algoritmo que solicite la edad de 200 personas, y que muestre cuantos son mayores y menores de edad.

#include <stdio.h>

void main() {
    
    // variables
    int edad;
    int mayores = 0; // en este caso inicializamos las variables a 0 
    int menores = 0;
    
    // bucle que se repetira 200 veces
    for(int i = 0; i < 200; i++) {

        // recolectamos datos
        printf("Introduzca la edad: \n");
        scanf("%d", &edad);

        // determinamos si son mayores o menores
        if(edad < 18) {
            menores++;
        } else {
            mayores++;
        }
    }

    // mostramos por pantalla los resultados
    printf("La cantidad de personas mayores de edad es: %d \n", mayores);
    printf("La cantidad de personas menores de edad es: %d \n", menores);

}