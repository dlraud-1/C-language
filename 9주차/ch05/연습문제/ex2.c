#include <stdio.h>
int main(){
    int sum=0;
    int num =1;
    while(num<=10){
        sum += num;
        num++;
    }
    printf("sum = %d\nnum = %d",sum,num);
}