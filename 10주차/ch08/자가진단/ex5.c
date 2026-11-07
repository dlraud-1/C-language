#include <stdio.h>
int main(){
    int n=10,min=1000;
    int a[n];
    for (int i=0; i<n;i++){
        scanf("%d ",&a[i]);
        if (min>=a[i]){
            min = a[i];
        }
    }
    printf("%d",min);
}