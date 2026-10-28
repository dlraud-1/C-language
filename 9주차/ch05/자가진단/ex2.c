#include <stdio.h>
int main(){
    int sum=0;
    int num = 1;
    int count;
    scanf("%d",&count);
    while(num<=count){
        sum += num;
        num++;
    }
    printf("%d",sum);
}