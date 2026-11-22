#include <stdio.h>
#include <string.h>

int main(){
    struct Person{
        char name[21];
        int h;
        float w;
    };
    struct Person p[5];
    for (int i=0;i<5;i++){
        scanf("%20s %d %f",p[i].name,&p[i].h,&p[i].w);
    }
    
    
    for (int i = 0; i< 5-1;i++){
        for( int j=0;j<5-1-i;j++){
            if (strcmp(p[j].name, p[j + 1].name)>0) 
            {
                struct Person temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
    for(int i =0 ;i <5;i++){
        if (p[i].w==(int)p[i].w){
            printf("%s %d %d\n",p[i].name,p[i].h,(int)p[i].w);
        }
        else{
            printf("%s %d %.1f\n",p[i].name,p[i].h,p[i].w);
        }
    }
}