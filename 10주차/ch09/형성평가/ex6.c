#include <stdio.h>
int main(){
    int a[5][5]={0};
    a[0][0] =1;
    a[0][2] =1;
    a[0][4] =1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i!=0){
                if (j==0){
                    a[i][j] = a[i-1][j+1];
                }
                else if (j==4){
                    a[i][j] = a[i-1][j-1];
                }
                else{
                    a[i][j] = a[i-1][j-1]+a[i-1][j+1];
                }
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}