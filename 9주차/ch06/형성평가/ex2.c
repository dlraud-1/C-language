#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int temp =a;
    if (a>b){
        a = b;
        b = temp;
    }

    for (int i =a; i<=b;i++){
        printf("%d ",i);
    }
}