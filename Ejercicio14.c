#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
Escribir un programa que acepte cuatro argumentos:
 las coordenadas de dos vectores en el plano e imprima
  el valor del producto entre dichos vectores.
*/
int main(int argc, char *argv[]) {
int x = atoi(argv[1]);
int y = atoi(argv[2]);
int b = atoi(argv[3]);
int a = atoi(argv[4]);
int r , s , n;
r = x * b;
s = y * a;
n = r + s;
printf("%d\n", n );


return 0;
}
