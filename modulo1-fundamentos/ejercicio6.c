/*
    Calcular el algoritmo que determine la nota de un examen tipo test 
    de 10 preguntas a partir del número respuestas correctas, falladas y no contestadas. 
    La respuesta acertada suma 1, la repuesta fallada resta 0,25 
    y la respuesta no contestada ni suma ni resta. El primer fallo no cuenta​.
*/

#include <stdio.h>

main() {

    // variables
    int correctas;
    int falladas;
    float nota;

    // recoleccion de datos
    printf("Introduzca la cantidad de preguntas correctas: \n");
    scanf("%d", &correctas);
    printf("Introduzca la cantidad de preguntas falladas: \n");
    scanf("%d", &falladas);

    // calculamos la nota
    if(falladas > 1) { // si hay mas de un fallo, entonces tenemos que descontar.
        nota = (correctas * 1) - ((falladas - 1) * 0.25);
    } else { // si no hay fallos o solo hay uno, no se descuenta nada.
        nota = (correctas * 1);
    }
    
    // mostramos la nota por pantalla.
    printf("La nota del examen es: %d", nota);

}