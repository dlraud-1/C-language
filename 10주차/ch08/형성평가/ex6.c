#include <stdio.h>
int main(){
    int n=100;
    int a[n];
    int i=0;
    int sum=0,count=0;
    while (1){
        scanf("%d",&a[i]);
        if(a[i]==0){
            break;
        }
        if (a[i]%5==0){
            count++;
            sum+=a[i];
        }
    }
    printf("Multiples of 5 : %d\nsum : %d\navg : %.1f",count,sum,(float)sum/count);
}