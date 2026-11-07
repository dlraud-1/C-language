#include <stdio.h>
int main(){
    int a[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i = 0;
    while (1){
        scanf("%d",&i);
        if(i<1 || i>12){
            break;
        }
        printf("%d\n",a[i-1]);
    }
}