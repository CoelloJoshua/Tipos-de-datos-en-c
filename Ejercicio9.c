#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*Escribir un programa que acepte dos argumentos: día y mes (ambos de tipo int).
 Imprimir "verdadero" si la fecha está entre el 20 de marzo y el 20 de junio, o "falso" de lo contrario.
*/
int main(int argc, char *argv[]) {
int x = atoi(argv[1]);
int y = atoi(argv[2]);
bool fecha;
fecha = fecha || x >= 20 <= 31;
fecha = fecha || y >= 3 <= 6;
fecha = fecha || x >= 20 >= 31;
fecha = fecha || y <= 3 <= 6;

printf("%s\n", fecha ? "verdadero" : "falso");
return 0;
 }
