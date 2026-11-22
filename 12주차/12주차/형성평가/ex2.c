#include <stdio.h>
#include <string.h>

struct Person{
    char name[30];
    char tel[30];
    char addr[30];
};

void sorted(struct Person *p){
    for (int i = 0; i<3-1;i++){
        for(int j = 0; j<3-1-i;j++){
            if(strcmp(p[j].name,p[j+1].name)>0){
                struct Person temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
};

int main(){
    struct Person p[3];

    for (int i=0;i<3;i++){
        scanf("%29s %29s %29s",p[i].name,p[i].tel,p[i].addr);
    }

    sorted(p);

    printf("name : %s\n",p[0].name);
    printf("tel : %s\n",p[0].tel);
    printf("addr : %s\n",p[0].addr);
}