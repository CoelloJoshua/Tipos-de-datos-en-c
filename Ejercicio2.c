#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Escribir un programa que tome dos argumentos enteros positivos
e imprima "verdadero" si alguno de los argumentos es divisible por el otro.
*/
int main(int argc, char *argv[]) {
int a = atoi(argv[1]);
int b = atoi(argv[2]);
bool visible;
   visible = visible && ( a % b != 0);
   visible = visible || ( a % b == 0);
   visible = visible && ( b % a != 0);
   visible = visible || ( b % a == 0);

 printf("%s\n", visible ? "Verdadero" : "No es verdadero");
  return 0;
}
