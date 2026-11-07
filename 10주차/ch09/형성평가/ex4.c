#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int a[101]={0};

    for (int i=0;i<n;i++){
        scanf("%d",&a[101]);
        a[a[101]]++;
    }

    for(int i=100;i>=0;i--){
        if (a[i]!=0){
            for(int j=0;j<a[i];j++)
            {
                printf("%d\n",i);
            }
        }
    }
}