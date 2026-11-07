#include <stdio.h>
int main(){
    int a[11]={0};
    while(1){
        scanf("%d",&a[11]);
        if (a[11]==0){
            break;
        }
        a[a[11]/10]++;
    }
    for(int i=10;i>=0;i--){
        if (a[i]!=0){
            printf("%d : %d\n",i*10,a[i]);
        }
    }
}