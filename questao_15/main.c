#include <stdio.h>
#include <stdlib.h>

void ordenacao (int n, float p[]){
    int i,j,aux;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if(p[j]<p[i]){
            aux = p[i];
            p[i] = p[j];
            p[j]=aux;
          }
       }
    }
    for(i=0;i<n;i++){
        printf("%.1f ",p[i]);
    }
    printf("\n");
}

int main()
{
    int n,i,j;
    float *p,aux;
    printf("Digite o numero de valores desejados \n");
    scanf("%d", &n);
    p = (float*)malloc(n*sizeof(float));
    if(p==NULL){
        printf("nao foi possivel alocar a memoria");
        exit(0);
    }

    for(i=0;i<n;i++){
        printf("digite o valor da %d.a posicao\n",i+1);
        scanf("%f",&p[i]);
    }
    for(i=0;i<n;i++){
        printf("%.1f ",p[i]);
    }
    printf("\n======================ORDENANDO====================\n");

    ordenacao(n,p);
    free(p);
    return 0;
}
