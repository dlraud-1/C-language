#include <stdio.h>
int main(){
    int a[5][5]={
        {1}
    };
    for(int i=1;i<6;i++){
        for(int j=0;j<i;j++){
            if (i!=0){
                a[i][j] = a[i-1][j-1]+a[i-1][j];
            }
            else{
                a[i][j] = 1;
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}