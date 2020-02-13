#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = v;
    printf("%ld\n",ptr);
    printf("%ld\n",ptr+1);
    printf("%ld\n", (*ptr)+1);
    printf("%ld\n", *(ptr+1));
    printf("%ld\n", *(ptr+10));
   
    return 0;
}