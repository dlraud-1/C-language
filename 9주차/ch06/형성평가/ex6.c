#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int temp =a;
    if (a>b){
        a = b;
        b = temp;
    }

    int sum =0,cnt=0;
    for (int i =a; i<=b;i++){
        if(i%3==0||i%5==0){
            sum += i;
            cnt++;
        }
    }

    float avg= (float)sum/cnt;
    printf("sum : %d\navg : %.1f",sum,avg);
}