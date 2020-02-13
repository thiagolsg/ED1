#include <stdio.h>
#include <stdlib.h>

void converte(int tempo, int *min,int *seg){

    *min=tempo/60;
    *seg=tempo%60;


}



int main(){
int t,m,s;
scanf("%d",&t);
converte(t,&m,&s);

printf("%d minutos e %d segundos\n",m,s);

return 0;
}