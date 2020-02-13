#include <stdio.h>
#include <stdlib.h>


int main() {
int b[5] = { 1, 2, 3, 4, 5 };
int *bPtr;
int i;
bPtr = b;
*(bPtr+2) += 10;
bPtr = bPtr+2;
for ( i = 0; i < 5; i++ )
printf( "b[%d] = %d\n", i, b[i] );
printf("\n");
for ( i = 0; i < 10; i++ )
printf( "bPtr[%d] = %d\n", i, bPtr[i] );
return 0;
}