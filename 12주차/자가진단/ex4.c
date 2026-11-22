#include <stdio.h>
int main(){
    struct Std{
        char name[21];
        int h;
    };
    struct Std s[5];
    int min =300;
    int index =0;
    for (int i=0;i<5;i++){
        scanf("%20s %d",s[i].name,&s[i].h);
        if ( min>s[i].h){
            min = s[i].h;
            index = i;
        }
    }
    printf("%s %d",s[index].name,s[index].h);
}