#include <stdio.h>
int main(){
    int a[11]={0};
    while(1){
        scanf("%d",&a[10]);
        if (a[10]==0){
            break;
        }
        a[(a[10]/10)%10]++;
    }
    for(int i =0;i<10;i++){
        if(a[i]!=0){
            printf("%d : %d\n",i,a[i]);
        }
    }
}