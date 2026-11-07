#include <stdio.h>
int main(){
    int n =6;
    float a[n];
    float sum = 0;
    for (int i=0;i<n;i++){
        scanf("%f",&a[i]);
        sum +=a[i];
    }
    printf("%.1f",sum/n);
}