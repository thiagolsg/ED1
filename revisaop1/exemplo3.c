#include <stdio.h>
int main () {
int i; int *p;
i = 1234; p = &i;
printf ("*p = %d\n", *p);
printf (" p = %ld\n", (long int) p);
printf (" p = %p\n", (void *) p);
printf ("&p = %p\n", (void *) &p);
printf("&i = %ld\n",(long int)&i);
return 0;
}