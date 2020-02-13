#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10]={1,2,3,4,5,6,7,8,9};
    int *ponteiro;
 //   vetor=vetor+2;
//    vetor++;
    ponteiro=vetor;
    printf("%ld\n",ponteiro);
    ponteiro=vetor+2;
    printf("%ld\n",*ponteiro);
    printf("%ld\n",vetor+2);
//    printf("%ld\n",*(*(nums+1)));
//    printf("%ld\n", *(*nums+1));
//    printf("%ld\n", *(*(nums+1)+1));


    return 0;
}