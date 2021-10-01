#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/*
Escribir un programa que acepte tres argumentos de tipo double:
x0, v0 y t. Imprimir el resultado de x0 + v0t + gt2/2. O sea la ecuación
 de desplazamiento para un tiro vertical después de t segundos,
 con posición inicial x0 y velocidad inicial v0.
*/
int main(int argc, char *argv[]) {
  double x = atof(argv[1]);
  double v = atof(argv[2]);
  double t = atof(argv[3]);
  double r;
  double g;
  g = 9.8;
  r = x + v * t + g * t * t / 2;

  printf("%d\n", r );

  return 0;
}
