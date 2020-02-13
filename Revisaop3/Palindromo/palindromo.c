#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
char dado;
struct celula *prox;
} celula;

celula *inicializa(){
    celula *p;
    p=malloc(sizeof(celula));
    if(p==NULL) exit(EXIT_FAILURE);
    p->prox=NULL;
    return p;
}

void empilha (celula *p, char x){
    celula *novo=malloc(sizeof(celula));
    if(novo==NULL) exit(EXIT_FAILURE);
   else if(novo!=NULL){ 
    novo->dado=x;
    novo->prox=p->prox;
    p->prox=novo;

    }

}

void desempilha (celula *p, char *y){
    celula *lixo=p->prox;
    if(lixo==NULL) exit(EXIT_FAILURE);
    else if(lixo!=NULL){
    *y=lixo->dado;
    p->prox=lixo->prox;
    free(lixo);

    }

}

int main(){
celula *p;

char x;
char y;
int i=0;
int j=0;
p=inicializa();

int num;
scanf("%d",&num);
char a[num];

if(num%2==0){

    for(i=0;i<num/2;i++){
        scanf(" %c",&x);
        empilha(p,x);

    }
    for(j=0;j<num/2;j++){
        scanf(" %c",&x);
        a[j]=x;
    }
    for(int k=0;k<num/2;k++){
        desempilha(p,&y);
        if(y!=a[k]){
            printf("0\n");
            return 0;
        }
    }
printf("1\n");
return 0;

}


else{
    for(i=0;i<num/2;i++){
        scanf(" %c",&x);

        empilha(p,x);

    }
    
        scanf(" %c",&x);
    
    for(j=0;j<num/2;j++){
        scanf(" %c",&x);
        a[j]=x;
    }
    for(int k=0;k<num/2;k++){
        desempilha(p,&y);
        if(y!=a[k]){
            printf("0\n");
            return 0;
        }
    }
printf("1\n");
return 0;
}


    return 0;
}