#include <stdio.h>
int main(){
    int n = 100;
    int a[n],b[n];
    int i=0;
    int count =0;
    while (1){
        scanf("%d",&a[i]);
        if(a[i]==0){
            break;
        }
        if (a[i]%2==1){
            b[i] = a[i]*2;
        }
        else if (a[i]%2==0)
        {
            b[i] = a[i]/2.0;
        }
        
        count++;
        i++;
    }
    printf("%d\n",count);
    for(int j=0;j<count;j++){
        printf("%d ",b[j]);
    }
}