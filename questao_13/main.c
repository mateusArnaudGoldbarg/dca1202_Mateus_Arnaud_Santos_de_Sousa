/*
 Ponteiros para função tem como finalidade passar uma funcao como parametro para outra funcao. A partir disso, podemos chamar
 as funcoes apartir de "alias", como apelidos.
 Alem diss, eh possivel passar o ponteiro para funcao como parametro de uma funcao
 */


#include <stdio.h>

int exe(int(*p)(int,int),int x, int y){
    // o alias ou apelido será chamado de p, que eh  o ponteiro para a funcao
    return p(x,y);
}

int soma(int x, int y){
    return x+y;
}

int subtrai(int x,int y){
    return x-y;
}

int main()
{
    int w=10,x=15,y,z;
    y = exe(soma,w,x);
    z = exe(subtrai,x/3,y);
    printf("y = %d \n",y);
    printf("z = %d \n",z);
    return 0;
}


