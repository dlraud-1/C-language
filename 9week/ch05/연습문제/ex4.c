#include <stdio.h>
int main(){
    int a;
    int cnt=0,sum =0;
    float avg=0;
    while(1){
        scanf("%d",&a);
        if (a==0){
            break;
        }
        cnt++;
        sum += a;
    }
    avg = (float)sum/cnt;
    printf("cnt = %d\nsum = %d\navg = %.2f",cnt,sum,avg);
}