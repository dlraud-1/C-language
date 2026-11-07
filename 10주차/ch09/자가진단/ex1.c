#include <stdio.h>
int main(){
    char a[(int)'Z'+1]={};
    while (1){
        scanf("%s",&a[0]);
        if(a[0]<'A'|| a[0]>'Z'){
            break;
        }
        a[(int)a[0]]++;
    }
    for (int j='A';j<='Z';j++){
        if(a[j]!=0){
            printf("%c : %d\n",j,a[j]);
        }
    }
}