#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Escribir un programa que acepte tres argumentos x, y y z enteros e imprima "verdadero"
si los números están en orden ascendente o descendente. Es decir si x > y > z o x < y < z.
 Si no lo están, imprimir "falso".
*/

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);
  bool ascendente;


   ascendente = ascendente || (x > y > z);
   ascendente = ascendente || (x < y < z);




  printf("%s\n", ascendente ? "Verdadero" : "Falso");

    return 0;
  }
