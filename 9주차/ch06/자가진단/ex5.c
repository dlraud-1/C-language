#include <stdio.h>
int main(){
    int a;
    int cnt =0,cnt2=0,cnt3=0;
    while(1){
        scanf("%d",&a);
        if (cnt == 10){
            break;
        }
        cnt++;
        if (a%3==0){
            cnt2++;
        }
        if (a%5==0){
            cnt3++;
        }
    }
    printf("Multiples of 3 : %d\nMultiples of 5 : %d",cnt2,cnt3);
}