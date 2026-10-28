#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=20-a;
    if (a>=20){
        printf("adult");
    }
    else{
        printf("%d years later",b);
    }
}