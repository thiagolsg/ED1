#include <stdio.h>
int main() {
int array[20];
char string[20];
printf ("TAMANHOS:\n"
"\t char.........: %ld\n"
"\t short........: %ld\n"
"\t int..........: %ld\n"
"\t long int.....: %ld\n"
"\t long long int: %ld\n"
"\t float........: %ld\n"
"\t double.......: %ld\n"
"\t long double..: %ld\n"
"\t vetor int....: %ld\n"
"\t string.......: %ld\n",
sizeof(char), sizeof(short), sizeof(int), sizeof(long int),
sizeof(long long int), sizeof(float), sizeof(double),
sizeof(long double), sizeof(array), sizeof(string)
);
return 0;
}