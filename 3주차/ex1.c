#include <stdio.h>

int main(void)
{
    int a;

    printf("연도를 입력하세요 : ");
    scanf("%d", &a);

    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
    {
        printf("%d년도는 윤년입니다", a);
    }
    else
    {
        printf("%d년도는 평년입니다", a);
    }

    return 0;
}