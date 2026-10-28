#include <stdio.h>
int main(){
    int a,b;
    char c;

    while(1){
        scanf("%d %d",&a,&b);
        printf("Triangle area = %.1f\n",(a*b)/2.0);
        printf("Continue? ");
        scanf("%s",&c);
        if (c != 'y' && c != 'Y'){
            break;
        }
    }
}