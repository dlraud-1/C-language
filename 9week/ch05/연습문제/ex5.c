#include <stdio.h>
int main(){
    int a;
    int Max=0,Min=100;
    while(1){
        scanf("%d",&a);
        if (a==0){
            break;
        }
        if (a>=1 && a <=100 && a>=Max){
            Max = a;
        }
        if (a>=1 && a <=100 && a<=Min){
            Min = a;
        }
    }
    printf("MAX = %d\nMIN = %d",Max,Min);
}