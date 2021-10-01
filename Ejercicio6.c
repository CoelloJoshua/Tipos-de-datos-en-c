#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// No se porque me toma 6+6=12
/*
Escribir un programa que imprima la suma de dos enteros
aleatorios entre 1 y 6 como cuando tiras dos dados.
*/
  int main(int argc, char *argv[]) {

  int b = 0;
  int c = 7;
  int n;
  int e;
  int d;
  n = b + 1;
  n = c - 1;
  d = b + 1;
  d = c - 1;
  srand(time(NULL));
    printf("%d\n", rand() % n);

    srand(time(NULL));
      printf("%d\n", rand() % d);

      e = h + d;
printf("%d + %d = %d\n", n , d , e );


  return 0;
}
