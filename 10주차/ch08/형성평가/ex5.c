#include <stdio.h>
int main(){
    int n = 100;
    int a[n];
    int i=0,max=0,min=0;
    while (1){
        scanf("%d",&a[i]);
        if (a[i]==0){
            break;
        };
        if(max<a[i]){
            max = a[i];
        }
        if (min==0){
            min = a[i];
        }
        else{
            if(min>a[i]){
                min = a[i];
            }
        }
        i++;
    }
    printf("%d",max+min);
}