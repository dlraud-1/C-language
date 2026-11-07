#include <stdio.h>
int main(){
    int a[10]={0};
    scanf("%d %d",&a[0],&a[1]);
    for (int i=0;i<10;i++){
        if(i<2){
            printf("%d ",a[i]);
        }
        else{
            a[i] = a[i-2]+a[i-1];
            if (a[i]>=10){
                a[i] %= 10;
            }
            printf("%d ",a[i]);
        }
    }
}