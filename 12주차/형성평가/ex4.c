#include <stdio.h>

    struct Body
    {
        int h;
        float w;
    };
    
    void stdBody(struct Body *p){
        p[2].h = (p[0].h+p[1].h)/2+5;
        p[2].w = (p[0].w+p[1].w)/2-4.5;
    };

int main(){
    struct Body p[3];

    for(int i =0; i<2;i++){
        scanf("%d %f",&p[i].h,&p[i].w);
    }

    stdBody(p);

    printf("height : %dcm\nweight : %.1fkg",p[2].h,p[2].w);
}