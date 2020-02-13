#include <stdio.h>
#include <stdlib.h>

//Complexity log(n)

int binarysearch(int *v,int n,int x){
    int e=-1;
    int d=n;
    int m;

    while(e<d-1){
        m=(e+d)/2;
        if(v[m]<x) e=m;
        else d=m;
    }  
return d;
}

int main(){

int n,m;

int count=0;

scanf("%d %d",&n,&m);
int vet1[n];
int vet2[m];
for(int i=0;i<n;i++){
    scanf("%d",&vet1[i]);
}
for(int i=0;i<m;i++){
    scanf("%d",&vet2[i]);
}

for(int i=0;i<m;i++){
   printf("%d\n",binarysearch(vet1,n,vet2[i]));
}




    return 0;
}