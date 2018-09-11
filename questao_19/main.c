#include <stdio.h>
#include <stdlib.h>

void mm(int *a,int *b,int *c,int n){
    int i,j;

    for(i=0;i<n;i++){
            printf("%d ",a[i]);
    }
    printf("\n\n");


    for(i=0;i<n;i++){
            printf("%d ",b[i]);
    }
    printf("\n\n");

        for(i=0;i<n*n;i++){
            c[i] = a[i]*b[i];
        }

        for(i=0;i<n*n;i++){
            printf("%d ",c[i]);
        }
        printf("\n");

    printf("\n\n");

}

int main()
{
    int n,**x,**y,**z,i,j;

    n= 6;
    x = (int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++){
        x[i] = (int*)malloc(n*sizeof(int));
    }

    y = (int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++){
        y[i] = (int*)malloc(n*sizeof(int));
    }

    z = (int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++){
        z[i] = (int*)malloc(n*sizeof(int));
    }

    srand(time(NULL));

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            y[i][j] = (j-i)*3;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d  ",y[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            x[i][j] = (i+1)*2;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d  ",x[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    mm(x[0],y[0],&z[0],n);

    return 0;
}
