#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int cnt = 1;
    for (int i = a; i>= 1; i--){
        for(int j = i*2-1; j>=1;j--){
            if(j%2==1){
                printf("%d ",cnt);
                cnt++;
            }
        }
        printf("\n");
        for(int j = 0; j <=a-i;j++){
            printf("  ");
        }
    }
}