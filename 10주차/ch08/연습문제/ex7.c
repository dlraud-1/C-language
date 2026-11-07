#include <stdio.h>
int main(){
    int n=10;
    int a[n];
    int sum=0;
    float avg=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    avg= (float)sum/n;

    printf("sum = %d\navg = %.1f",sum,avg);
}