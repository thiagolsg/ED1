#include <math.h>
#include <stdio.h>
int calcula (double n, double *quadrado, double *raiz) {
*quadrado = n*n;
*raiz = sqrt (n);
}
int main () {
double n, quadrado, raiz;
scanf ("%lf", &n);
calcula (n, &quadrado, &raiz);
printf ("Quadrado = %lf\nRaiz = %lf\n", quadrado, raiz);
return 0;
}
