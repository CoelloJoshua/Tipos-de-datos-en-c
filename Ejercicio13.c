#include <stdio.h>
#include <stdlib.h>
/*
Escribir un programa que intercambie el valor de dos variables enteras a y b.
Los valores iniciales de a y b son argumentos del programa. Imprimir los valores
 de a y b antes y después del cambio.
*/
int main(int argc, char *argv[]) {
  int a;
  int b;
  a = 55;
  b = 60;

  printf("%d %d\n",  a, b );

  a = a + 5;
  b = b - 5;

  printf("%d %d\n",  a, b );

      return 0;
    }
