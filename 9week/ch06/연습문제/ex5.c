#include <stdio.h>
int main(){
    int a;
    int cnt =0,Even =0;
    while(1){
        scanf("%d",&a);
        if (cnt == 10){
            break;
        }
        cnt++;
        if (a%2==0){
            Even++;
        }
    }
    printf("Even numbers = %d",Even);
}