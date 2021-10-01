#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
/*
Escribir un programa que reciba como argumento un entero entre 0 y 99.
El programa debe generar un número aleatorio en ese rango e imprimir
"Ganaste!" si el número ingresado coincide con el número generado o
"Perdiste!" de lo contrario.
*/
int main(int argc, char *argv[]) {
int a = atoi(argv[1]);
int b = 0;
int c = 99;
int n;
n = b + 1;
n = c - 1;

srand(time(NULL));
printf("%d\n", rand() % n);
bool nada;
nada = n == a;
nada = nada && n != a;


printf("%s\n", nada ? "Ganaste" : "Perdiste");


    return 0;
  }
