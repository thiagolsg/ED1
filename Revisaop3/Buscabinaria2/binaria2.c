#include <stdio.h>
#include <stdlib.h>

int binarysearch(int *vor,int *v2deso,int n,int x){
    int e=-1;
    int d=n;
    int m;

while(e<d-1){
        m=(e+d)/2;
        if(vor[m]==x){
            for(int i=0;i<n;i++){
                if(vor[m]==v2deso[i]){
                    return i;
                }
            }

        } 
        else if(vor[m]<x) e=m;
        else
        {
            d=m;
            
        }
        

}
    return -1;
}

void exchange(int *a,int *b){
    int tmp=*a;
    *a= *b;
    *b=tmp;
}


void insertionshort(int *v,int tam){
    for(int i=1;i<tam;i++){
        int aux=i;
            while(aux>=1 && v[aux]<v[aux-1]){
                exchange(&v[aux],&v[aux-1]);
                aux--;
            }
    }
}

int main(){
    int n,m;

    scanf("%d %d",&n,&m);

    int vet1[n];
    int vet2[m];
    int vet1or[n];
    for(int i=0;i<n;i++){
        scanf("%d",&vet1[i]);
    }
    for(int i=0;i<n;i++){
        vet1or[i]=vet1[i];
    }
    for(int i=0;i<m;i++){
        scanf("%d",&vet2[i]);
    }

    insertionshort(vet1or,n);


    for(int i=0;i<m;i++){
        printf("%d\n",binarysearch(vet1or,vet1,n,vet2[i]));
    }




    return 0;
}