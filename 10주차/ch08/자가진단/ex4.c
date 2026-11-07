#include <stdio.h>
int main(){
    float a[]={85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int i=0,j=0;
    float sum =0;

    scanf("%d %d",&i,&j);
    if (i >= 1 && i <= 6 && j >= 1 && j <= 6) {
        sum = a[i-1] + a[j-1];
        printf("%.1f\n", sum);
    }
}