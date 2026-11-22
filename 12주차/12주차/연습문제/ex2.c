#include <stdio.h>
#include <string.h>
int main(){
    struct Person{
        char name[30];
        int age;
    };

    struct Person p[2];
    strcpy(p[0].name, "Yejun");
    p[0].age = 12;
    scanf("%29s %d",p[1].name,&p[1].age);
    printf("Your name: %s, age: %d\nFriend's name: %s, age: %d",p[0].name,p[0].age,p[1].name,p[1].age);
}