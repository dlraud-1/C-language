#include <stdio.h>
int main(){
    int b;
    scanf("%d",&b);
    int a[100]={100,b};
    int i =2;
    printf("%d %d ",a[0],a[1]);
    while (a[i-1]>=0){
        a[i] = a[i-2] - a[i-1];
        printf("%d ",a[i]);
        i++;
    }
}