#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Hay veces que me saca un 0
/*
Escribir un programa que tome dos números enteros a y b
como argumentos e imprima un entero aleatorio entre a y b.
*/
int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int n;
  n = a - b + 1;
  n = a + b - 1;

  srand(time(NULL));
  printf("%d\n", rand() % n);
  return 0;
}
