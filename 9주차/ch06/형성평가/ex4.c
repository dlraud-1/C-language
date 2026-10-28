#include <stdio.h>
int main(){
    int a,b;
    int sum =0,cnt=0;
    float avg = 0;
    scanf("%d",&a);

    for (int i =1; i<=a;i++){
        scanf("%d",&b);
        sum+=b;
        cnt++;
    }
    avg = (float)sum/cnt;
    printf("%.2f",avg);
}