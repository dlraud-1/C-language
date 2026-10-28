#include <stdio.h>
int main(){
    int a;
    int count=0,sum =0;
    float avg=0;
    while(1){
        scanf("%d",&a);
        if (a<0 || a>100){
            break;
        }
        count++;
        sum += a;
    }
    avg = (float)sum/count;
    printf("sum : %d\navg : %.1f",sum,avg);
}