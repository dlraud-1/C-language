#include <stdio.h>

struct Std
{
    char name[21];
    int score[3];
    int total;
};

void input(struct Std *s,int size){
    for(int i=0;i<size;i++){
        scanf("%20s %d %d %d",s[i].name,&s[i].score[0],&s[i].score[1],&s[i].score[2]);
        s[i].total = s[i].score[0] + s[i].score[1] + s[i].score[2];
    }
}

void sort(struct Std *s,int size){
    for(int i=0;i<size-1;i++){
        for(int j =0;j<size-1-i;j++){
            if (s[j].total<s[j+1].total){
                struct Std temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

void output(struct Std *s,int size){
    for(int i=0;i<size;i++){
        printf("%s %d %d %d %d\n",s[i].name,s[i].score[0],s[i].score[1],s[i].score[2],s[i].total);
    }
}


int main(){
    int size;
    scanf("%d",&size);

    struct Std s[10];
    input(s,size);
    sort(s,size);
    output(s,size);

}