#include <stdio.h>
int main(){
    int a[5][5];
    for(int i = 0; i <5;i++){
        for(int j = 0; j<5;j++){
            a[i][j] =0;
            for (int k = 0;k<j+1;k++){
                if (j == 0 || i == 0){
                    a[i][j] = 1;
                }
                else{
                    a[i][j] += a[i-1][j-k];
                }
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}