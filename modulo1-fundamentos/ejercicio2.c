/* 
    Calcular el algoritmo que determine el número de puntos que lleva un 
    equipo de fútbol en competición de liga en función del número de partidos ganados, perdidos y empatados.

    NOTA: un partido ganado son 3 puntos, uno empatado es 1 y uno perdido son 0.
*/

#include <stdio.h>

int main() {

    // variables
    int partidosGanados;
    int partidosEmpatados;
    int partidosPerdidos; // OJO! en este caso, es opcional (leer enunciado)
    int puntosFinales;

    // fase de recoleccion de datos
    printf("Introduzca los partidos ganados... \n");
    scanf("%d", &partidosGanados);
    printf("Introduzca los partidos empatados... \n");
    scanf("%d", &partidosEmpatados);
    printf("Introduzca los partidos perdidos... \n");
    scanf("%d", &partidosPerdidos);

    // calculamos los puntos y los mostramos al usuario
    puntosFinales = (partidosGanados * 3) + (partidosEmpatados * 1) + (partidosPerdidos * 0);
    printf("Puntuacion del equipo: %d \n", puntosFinales);

    return 0;
}