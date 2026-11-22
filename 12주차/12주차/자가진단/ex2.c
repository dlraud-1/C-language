#include <stdio.h>
#include <string.h>

int main(){
    struct School{
        char name[50];
        int grade;
    };

    struct School s[2];
    strcpy(s[0].name,"Jejuelementary");
    s[0].grade = 6;
    scanf("%49s %d",s[1].name,&s[1].grade);
    printf("%d grade in %s School\n",s[0].grade,s[0].name);
    printf("%d grade in %s School\n",s[1].grade,s[1].name);
}