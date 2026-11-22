#include <stdio.h>

int main(){
    struct Person{
        char name[30];
        int age;
    };

    struct Person p1;

    scanf("%29s %d",p1.name,&p1.age);

    printf("Your name is %s and you are %d years old.",p1.name,p1.age);

}