#include <stdio.h>
int main() {
int i = 5;
printf( "&i (dec.): %ld\n", (long int) &i );
printf( "&i (hexa.): %p\n", (void *) &i );
return 0;
}