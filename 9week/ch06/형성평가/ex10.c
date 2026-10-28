#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int temp = a;
    if(a<b){
        for (int i =1;i<=9;i++){
            for(int j = a; j<=b;j++){
                printf("%d * %d =%3d   ",j,i,j*i);
            }
            printf("\n");
        }
    }
    else if(a>=b){
        for (int i =1;i<=9;i++){
            for(int j = a; j>=b;j--){
                printf("%d * %d =%3d   ",j,i,j*i);
            }
            printf("\n");
        }
    }
}
