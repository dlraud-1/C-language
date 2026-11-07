#include <stdio.h>
int main(){
    int a[7]={0};
    for (int i = 0; i <10;i++){
        scanf("%d",&a[0]);
        a[a[0]]++;
    }
    for (int i = 1; i <= 6;i++){
        printf("%d : %d\n",i,a[i]);
    }
}