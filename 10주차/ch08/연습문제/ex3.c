#include <stdio.h>
int main(){
    int a[100];
    int i = 1;
    while (1){
        scanf("%d ",&a[i]);
        if (a[i] == 0){
            break;
        }
        if (i%2==0){
            printf("%d ",a[i]);
        }
        i++;
    }
}