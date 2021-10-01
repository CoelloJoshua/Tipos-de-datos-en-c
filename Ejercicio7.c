#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 /*
Escribir un programa que imprima el valor de sen(2t) + sen(3t).
Siendo t un argumento del programa, de tipo double.
 */
 int main(int argc, char *argv[]) {
   double t = 2;
   double b;
   double c;
   double d;
   b = cos(2 * 2);
   c = sin(3 * 3);
   d = b + c;

   printf("%d + %d = %d\n ",b,c,d);
 return 0;
 }
