#include <stdio.h>
int main() {
int x=10;
int *p;
p=&x;
int **q = &p;
//x = 10;
printf("%d\n", **q);
return 0;
}