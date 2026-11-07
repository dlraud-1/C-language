#include <stdio.h>
int main(){
    int a[4][4]={0};
    for (int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            a[i][3]+=a[i][j];
        }
        printf("%d\n",a[i][3]);
    }
    int sum =0;
    for (int i=0; i<4; i++){
        sum += a[i][3];
    }
    printf("%d",sum);
}