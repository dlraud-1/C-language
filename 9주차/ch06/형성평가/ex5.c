#include <stdio.h>
int main(){
    int a;
    int E=0,O=0;

    for (int i =1; i<=10;i++){
        scanf("%d",&a);
        if(a%2==0){
            E++;
        }
        else if(a%2==1){
            O++;
        }
    }
    printf("even : %d\nodd : %d",E,O);
}