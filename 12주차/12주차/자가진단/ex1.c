#include <stdio.h>

int main(){
    struct std{
        char name[30];
        char school[30];
        int grade;
        
    };

    struct std s1;
    scanf("%29s %29s %d",s1.name,s1.school,&s1.grade);
    printf("Name : %s\nSchool : %s\nGrade : %d",s1.name,s1.school,s1.grade);
}