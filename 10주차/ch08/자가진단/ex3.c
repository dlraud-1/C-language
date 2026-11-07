#include <stdio.h>
int main(){
    int a[100];
    int i = 1;
    while (1){
        scanf("%d ",&a[i]);
        if (a[i] == 0){
            break;
        }
        i++;
    }
    for(int j = i-1; j>0;j--){
        printf("%d ",a[j]);
    }
}