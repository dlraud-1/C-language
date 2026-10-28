#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char cnt = 'A';
    int cnt2 = 0;
    for (int i = 1; i<= a; i++){
        for (int j = 0; j<=a*2-i*2;j++){ 
            if (j%2==0){
                printf("%c",cnt);
                cnt++;
            }
            else{
                printf(" ");
            }
        }
        for(int j = 1; j<= i-1;j++){
            printf(" %d",cnt2);
            cnt2++;
        }
        printf("\n");
    }
}