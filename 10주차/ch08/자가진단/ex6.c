#include <stdio.h>
int main(){
    int max=0,min=1000;
    int a[]={};
    int i=0;
    while (1){
        scanf("%d ",&a[i]);
        if (a[i]==0){
            break;
        }
        if (min>=a[i]){
            min = a[i];
        }
        if (max<=a[i]){
            max = a[i];
        }
    }
    printf("%d",max-min);
}