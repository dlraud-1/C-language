#include <stdio.h>
int main(){;
    int a[11]={0};
    int i=0;
    while (1){
        scanf("%d",&a[0]);
        if (a[0]>10 || a[0]<1){
            break;
        }
        a[a[0]]++;
    }
    for(int j =1;j<=10;j++){
        if (a[j]!=0){
            printf("%d : %d\n",j,a[j]);
        }
    }
}