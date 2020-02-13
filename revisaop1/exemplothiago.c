#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr;
    int n;  
    int i;
    ptr=&i;
    scanf("%d",&n);
    printf("%ld\n",(long int)ptr);
    ptr = ptr+n;//*sizeof(int);
    printf("%ld\n",(long int)ptr);


    return 0;
}