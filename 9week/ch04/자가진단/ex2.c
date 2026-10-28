#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = b+100-a;
    printf("%d\n",c);
    if (c>0){
        printf("Obesity\nNeed control",a);
    }
}