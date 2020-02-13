#include <stdio.h>
#include <stdlib.h>

void imprime (char *v, int n) {
char *c;
for (c = v; c < v + n; c++)
printf ("%c", *c);
}

int main(){
    char v[10]={'1','2','3','4','5','6','7','8','9'};
    int n=10;
  
  imprime(v,n);

    return 0;
}