#include <stdio.h>
#include <stdlib.h>

int main(){

    long int nums[2][3] = { {16, 18, 20}, {25, 26, 27} };
    printf("%ld\n",nums);
    printf("%ld\n",nums+1);
    printf("%ld\n",*(*(nums+1)));
    printf("%ld\n", *(*nums+1));
    printf("%ld\n", *(*(nums+1)+1));


    return 0;
}