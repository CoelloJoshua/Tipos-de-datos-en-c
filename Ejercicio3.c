#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Escribir un programa que tome tres argumentos enteros
positivos e imprima "falso" si alguno es igual o mayor a la suma de los otros dos,
o "verdadero" en caso contrario.*/
int main(int argc, char *argv[]) {
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int c = atoi(argv[3]);
bool suma;
     suma = suma || ( a + b <= c);
     suma = suma || ( b + c <= a);
     suma = suma || ( c + a <= b);
     suma = suma || ( a + b <= c);
     suma = suma || ( b + c <= a);
     suma = suma || ( c + a <= b);

  printf("%s\n", suma ? "Falso" : "Verdadero");
return 0;
   }
