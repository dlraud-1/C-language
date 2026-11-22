#include <stdio.h>
int main(){
    struct Std{
        char name[21];
        int score;
    };
    struct Std s[5];
    int max =0;
    int index =0;
    for (int i=0;i<5;i++){
        scanf("%20s %d",s[i].name,&s[i].score);
        if ( max<s[i].score){
            max = s[i].score;
            index = i;
        }
    }
    printf("%s %d",s[index].name,s[index].score);
}