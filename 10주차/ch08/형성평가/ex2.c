#include <stdio.h>
int main(){
    int n=5;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (i%2==0){
            sum += a[i];
        }
    }
    printf("%d",sum);
}