#include <stdio.h>
int main(){
    int a;
    int S=0,L=1;
    while(1){
        scanf("%d",&a);
        if (a>=100){
            break;
        }
        if (a <50){
            S++;
        }
        else{
            L++;
        }
    }
    printf("small : %d\nlarge : %d",S,L);
}