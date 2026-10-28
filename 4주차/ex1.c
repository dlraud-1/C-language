#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int answer, num, count=0;

    srand(time(NULL));

    answer = rand() % 100 + 1;
    printf("1부터 100사이에 숫자를 맞춰보세요");

    while (1){
        printf("숫자 입력: ");
        scanf("%d",&num);
        count += 1;


        if (answer > num){
            printf("UP\n");
        }
        else if (answer < num){
            printf("DOWN\n");
        }
        else{
            printf("%d번 만에 맞줬습니다\n",count);
            break;
        }
    }
}