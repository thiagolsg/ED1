#include <stdio.h>
#include <stdlib.h>




int main(){
int *p[2];
int v[5]={1,2,3,4,5};
p[0]=v;
printf("%d\n",p[0][2]);

return 0;
}