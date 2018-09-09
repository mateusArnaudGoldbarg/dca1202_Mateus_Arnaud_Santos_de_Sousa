/*

 Apesar da maquina que uso os inteiros ocuparem 4 bytes cada, o resultado saiu como esperado se
 cada um deles ocupassem 2 bytes como no exercício proposto

*/
#include <stdio.h>

int main()
{
    char x[]={1,2,3,4};
    int y[]={1,2,3,4};
    float z[]={1,2,3,4};
    double w[]={1,2,3,4};

    int i;

    for (i=0;i<=3;i++){
        printf("x+%d = %d \n",i,x+i);
    }
    printf("\n");
    for (i=0;i<=3;i++){
        printf("y+%d = %d \n",i,y+i);
    }
    printf("\n");
    for (i=0;i<=3;i++){
        printf("z+%d = %d \n",i,z+i);
    }
    printf("\n");
    for (i=0;i<=3;i++){
        printf("w+%d = %d \n",i,w+i);
    }
    printf("\n");

    return 0;
}

/*
x+0 = 6356648
x+1 = 6356649
x+2 = 6356650
x+3 = 6356651

y+0 = 6356632
y+1 = 6356636
y+2 = 6356640
y+3 = 6356644

z+0 = 6356616
z+1 = 6356620
z+2 = 6356624
z+3 = 6356628

w+0 = 6356584
w+1 = 6356592
w+2 = 6356600
w+3 = 6356608
*/
