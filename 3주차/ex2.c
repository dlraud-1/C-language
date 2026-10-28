#include <stdio.h>

int main()
{
    int a;

    printf("학점을 입력해주세요:");
    scanf("%d", &a);

    switch (a / 10)
    {
    case 10:
        printf("A");
        break;
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("F");
        return 1;
    }

    return 0;
}