#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n][n]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if (j==0){
                a[i][j]=1;
            }
            else if(j==i){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i+1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}