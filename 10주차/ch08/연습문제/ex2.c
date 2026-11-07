#include <stdio.h>
int main(){
    char a[26];
    for(int i =0;i<=26;i++){
        a[i] = 'A'-1+i;
    }
    for(int i =26;i>0;i--){
        printf("%c ",a[i]);
    }
}