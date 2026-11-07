#include <stdio.h>
int main(){
    int n=10;
    char a[n];
    for(int i=0;i<n;i++){
        scanf("%s",&a[i]);
    }
    for(int i = n-1;i>=0;i--){
        printf("%c ",a[i]);
    }
}