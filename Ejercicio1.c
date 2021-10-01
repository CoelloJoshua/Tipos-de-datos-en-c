#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Escribir un programa que use cos() y sin() definidos en math.h para imprimir el
 valor de cos2θ + sen2θ para cualquier θ ingresado como argumento.
*/
int main(int argc, char *argv[]) {
  double a = atof(argv[1]);
  double b;
  double c;
  double d;
  b = cos(2);
  c = sin(2);
  d = b + c;
  printf("%d + %d = %d\n ",b,c,d);
return 0;
}
