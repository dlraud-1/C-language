#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a%2==0 && a>0){
        printf("Even Number");
    }
    else if (a%2==1 && a>0)
    {
        printf("Odd Number");
    }
    
    else{
        printf("Non positive");
    }

}