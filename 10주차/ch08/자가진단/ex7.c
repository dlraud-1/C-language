#include <stdio.h>
int main(){
    int n=10;
    int a[n];
    int sum=0,sum2=0;
    float avg=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if ((i+1)%2==0){
            sum += a[i];
        }
        if ((i+1)%2==1){
            sum2 += a[i];
        }
    }
    avg = (float)sum2/(n/2);

    printf("sum : %d\navg : %.1f",sum,avg);
}