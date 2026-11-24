#include <stdio.h>
#include <string.h>

void printf_reverse(char *s){
    size_t len = strlen(s);
    char *t = s + len -1;

    while (t>=s){
        printf("%c",*t);
        t--;
    }
}

int main(void){
    char str[100];
    printf("문자열 입력: ");
    scanf("%99[^\n]",str);

    printf("%s\n",str);
    printf_reverse(str);
}