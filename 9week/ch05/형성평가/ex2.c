#include <stdio.h>
int main(){
    int a;
    int E=0,O=0;
    while (1){
        scanf("%d",&a);
        if (a ==0){
            break;
        }

        if (a%2==0){
            E++;
        }
        else{
            O++;
        }
    }
    printf("odd : %d\n",O);
    printf("even : %d",E);
}