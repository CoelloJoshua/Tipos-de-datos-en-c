#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
Escribir un programa que calcule el producto cruz entre
dos vectores en el espacio. Usar 6 argumentos de tipo entero.
*/
int main(int argc, char *argv[]) {
int a , b , c , d , e , f , x , y , z;
a = 2;
b = 4;
c = 3;
d = 5;
e = 6;
f = 7;

x = (b * f) + (e * c);
y = (a * f) + (d * c);
z = (a * e) + (d * b);

printf("<%d %d %d>", x , y , z );










return 0;
}
