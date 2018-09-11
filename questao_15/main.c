#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//funcao de ordenacao que sera passada para o qsort
int ordenacao (const void *a,const void *b){
    //converte de void para float e acessa o conteudo daquele endereço.
    //faz a comparacao;
    if(*(const float*)a == *(const float*)b){
        return 0; // retorna 0 se o conteudo de a for igual ao de b
    }
    else
        if(*(const float*)a < *(const float*)b){
        return -1; //retorna -1 se o conteudo de a for menor ao de b
    }
    else{
        return 1; //retorna 1 se o conteudo de a for maior que o de b
    }
}


int main()
{
    int i,n = 10000;
    float v[n];
    clock_t t;
    t = clock();
    for(i=0;i<n;i++){
        v[i] = rand()%10;
    }
    printf("\n\n");

    //na funcao qsort eh passado o vetor "v", o tamanho do vetor, o tamanho em bytes do tipo da variavel e por utimo a funcao
    //dessa forma, acontecera a ordenacao em ordem crescente dos valores do vetor v
    qsort(v,n,sizeof(float),ordenacao);
    for(i=0;i<n;i++){
        printf("%.1f ",v[i]);
    }
    printf("\n");
    t = clock() - t;

    printf ("It took me %d clicks (%f seconds).\n",
              t,((float)t)/CLOCKS_PER_SEC);




    return 0;
}
