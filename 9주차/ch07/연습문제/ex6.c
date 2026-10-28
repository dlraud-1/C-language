#include <stdio.h>
int main(){

    int cnt=0;
    char cnt2='a';
    for (int i = 1; i <=4; i++){
        for (int j = 1; j<=i;j++){
            printf("%c ",cnt2);
            cnt2++;
        }
        for (int k = 1; k<=5-i;k++){
            cnt++;
            printf("%d ",cnt);
        }
        printf("\n");
    }
}