#include <stdio.h>
int main(){
    int a[5][5]={
        // {95, 100, 88,0},
        // {85, 60, 93,0},
        // {66, 99, 88,0},
        // {0,0,0,0,},
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            a[i][3] += a[i][j];
            a[3][j] += a[i][j];
            a[3][3] += a[i][j];
        }
    }
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}