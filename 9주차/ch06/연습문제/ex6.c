#include <stdio.h>
int main(){
    int a;
    int cnt =0,sum=0;
    float avg=0;
    while(1){
        scanf("%d",&a);
        if (cnt == 5){
            break;
        }
        cnt++;
        sum+=a;
    }
    avg = (float)sum/cnt;
    printf("sum : %d\navg : %.1f",sum,avg);
}