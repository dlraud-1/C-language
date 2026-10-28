#include <stdio.h>
int main(){
    int a;
    int cnt,sum=0;
    float avg=0;
    scanf("%d",&cnt);
    for (int i =1;i<=cnt;i++){
        scanf("%d",&a);
        sum+=a;
    }
    avg = (float)sum/cnt;
    printf("avg : %.1f\n",sum,avg);
    if(avg > 80){
        printf("pass");
    }
    else{
        printf("fail");
    }
}