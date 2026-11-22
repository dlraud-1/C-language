#include <stdio.h>
#include <string.h>

int main(){
    struct Pos{
        int x;
        int y;
    };

    struct Pos Pos_x[2];
    struct Pos Pos_y[2];

    int sumX = 0;
    int sumY = 0;

    for (int i =0;i<2;i++){
        scanf("%d %d",&Pos_x[i].x,&Pos_y[i].y);
        sumX +=Pos_x[i].x;
        sumY +=Pos_y[i].y;
    }

    printf("Center point = (%.1f, %.1f)",sumX/2.0,sumY/2.0);
}