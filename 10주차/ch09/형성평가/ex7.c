#include <stdio.h>

int main() {
    int a[5][3]={
        // {16,27,0},
        // {39,100,0},
        // {19,88,0},
        // {61,20,0},
        // {0,0,0}
    };
    for (int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
            a[i][2] += a[i][j];
            a[4][j] += a[i][j];
            a[4][2] += a[i][j];
        }
    }

    for (int i=0;i<4;i++){
        printf("%d ",a[i][2]/2);
    }
    printf("\n");
    for (int i=0;i<2;i++){
        printf("%d ",a[4][i]/4);
    }
    printf("\n");
    printf("%d ",a[4][2]/8);

}