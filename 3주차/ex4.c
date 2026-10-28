#include <stdio.h>

int main(){
    int a, b;


    printf("첫번째 세자리수 입력:");
    scanf("%d",&a);
    printf("두번째 세자리수 입력:");
    scanf("%d",&b);

    int temp;
    temp = b;

    while (temp > 0){
        printf("%d\n", a*(temp%10));
        temp/=10;
    }
    
    printf("%d",a*b);
}