#include <stdio.h>
int main(){
    int a[23]={1,1};
    for(int i=0;i<=22;i++){
        if(i>2){
            a[i] =a[i-1]+a[i-2];
            printf("%d ",a[i]);
        }
    }
}