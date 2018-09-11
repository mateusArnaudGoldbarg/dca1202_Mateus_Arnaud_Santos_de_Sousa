#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void somavetor(int *a,int *b,int *c, int n){
    int i;
    printf("v3 = ");
    for(i=0;i<n;i++){
        c[i] = a[i]+b[i];
        printf("%d, ",c[i]);
    }
    printf("\n");
}

int main()
{
    int n,i,*x,*y,*z;

    printf("Digite o tamanho dos vetores \n");
    scanf("%d",&n);
    srand (time(NULL));
    x = (int*)malloc(n*sizeof(int));
    if (x==NULL){
        printf("Nao eh possivel alocar x");
    }
    for(i=0;i<n;i++){
        x[i] = rand();
    }
    printf("v1 = ");
    for(i=0;i<n;i++){
        printf("%d,  ",x[i]);
    }
    printf("\n\n");

    y = (int*)malloc(n*sizeof(int));
    if (y==NULL){
        printf("Nao eh possivel alocar x");
    }
    for(i=0;i<n;i++){
        y[i] = rand();
    }
    printf("v2 = ");
    for(i=0;i<n;i++){
        printf("%d,  ",y[i]);
    }
    printf("\n\n");

    z = (int*)malloc(n*sizeof(int));
    if (z==NULL){
        printf("Nao eh possivel alocar x");
    }

    somavetor(x,y,&z,n);

    free(x);
    free(y);
    free(z);

    return 0;
}
