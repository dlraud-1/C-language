#include <stdio.h>
int main(){
    int n =10,odd=0,even=0;
    int a[n];
    for (int i =0;i<n;i++){
        scanf("%d",&a[i]);
        if ((i+1)%2==1){
            odd += a[i];
        }
        else if ((1+1)%2==0){
            even += a[i];
        }
    }
    printf("odd : %d\neven : %d",odd,even);
}