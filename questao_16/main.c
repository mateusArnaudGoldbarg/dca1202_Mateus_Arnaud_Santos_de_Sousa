#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int ordenacao (const void *a,const void *b){

    if(*(const float*)a == *(const float*)b){
        return 0;
    }
    else
        if(*(const float*)a < *(const float*)b){
        return -1;
    }
    else{
        return 1;
    }
}


int main()
{
    int i,n=10000;
    float v[n];
    float *vet;
    clock_t t;

    vet = &v;

//    printf("Digite o tamanho do vetor\n");
//    scanf("%i",&n);

    for(i=0;i<n;i++){
        vet[i] = rand()%10;
    }
printf("cheguei");
    for(i=0;i<n;i++){
        printf("%.1f ", vet[i]);
    }
    printf("\n\n");
printf("cheguei");
    t = clock();
    //passando o ponteiro vet como parametro na funcao qsort
    qsort(vet,n,sizeof(float),ordenacao);

printf("cheguei");

    for(i=0;i<n;i++){
        printf("%.1f ",vet[i]);
    }
    printf("\n");
    t = clock()- t;

    printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);


    return 0;
}
