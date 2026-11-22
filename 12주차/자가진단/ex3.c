#include <stdio.h>
#include <string.h>

int main(){
    struct Person{
        char name[21];
        int h;
    };

    struct Person p[3];
    for (int i=0;i<3;i++){
        scanf("%20s %d",p[i].name,&p[i].h);
        printf("%s : %dcm\n",p[i].name,p[i].h);
    }
}