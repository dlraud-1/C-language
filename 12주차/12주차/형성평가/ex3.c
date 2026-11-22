#include <stdio.h>

int main(){
    struct Pos{
        int x1,y1;
        int x2,y2;
    };
    struct Pos pos[3];

    for (int i=0;i<2;i++){
        scanf("%d %d %d %d",&pos[i].x1,&pos[i].y1,&pos[i].x2,&pos[i].y2);
    }

    pos[2].x1 = (pos[0].x1 < pos[1].x1) ? pos[0].x1 : pos[1].x1;
    pos[2].y1 = (pos[0].y1 < pos[1].y1) ? pos[0].y1 : pos[1].y1;
    pos[2].x2 = (pos[0].x2 > pos[1].x2) ? pos[0].x2 : pos[1].x2;
    pos[2].y2 = (pos[0].y2 > pos[1].y2) ? pos[0].y2 : pos[1].y2;

    printf("%d %d %d %d", pos[2].x1, pos[2].y1, pos[2].x2, pos[2].y2);
}