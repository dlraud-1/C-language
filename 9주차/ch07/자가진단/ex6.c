#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int cnt=0;
    char cnt2='A';
    for (int i = 1; i <=a; i++){
        for (int j = a; j>=i;j--){
            cnt++;
            printf("%d ",cnt);
        }
        for (int k = 1; k<=i;k++){
            printf("%c ",cnt2);
            cnt2++;
        }
        printf("\n");
    }
}