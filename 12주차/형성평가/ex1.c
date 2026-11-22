#include <stdio.h>

int main(){
    struct Person{
        char name[30];
        char tel[30];
        char addr[30];
    };

    struct Person p;

    scanf("%29s %29s %29s",p.name,p.tel,p.addr);
    printf("name : %s\n",p.name);
    printf("tel : %s\n",p.tel);
    printf("addr : %s\n",p.addr);


}