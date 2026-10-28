#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char cnt='A';
    for (int i = n; i >=1; i--){
        for (int j = i; j>=1;j--){
            printf("%c",cnt);
            cnt++;
        }
        printf("\n");
    }
}