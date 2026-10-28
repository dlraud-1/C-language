#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i = 1; i<= a; i++){
        for (int j = 1; j<=a*2-(i*2);j++){
            printf(" ");
        }
        for(int j = 1; j<= i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
}