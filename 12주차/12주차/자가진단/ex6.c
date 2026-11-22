#include <stdio.h>
#include <string.h>

struct Score
{
    char name[30];
    int kor;
    int eng;
};

struct Score plus_(struct Score a, struct Score b)
{
    struct Score total;
    strcpy(total.name, "Total");
    total.kor = a.kor + b.kor;
    total.eng = a.eng + b.eng;
    return total;
}

int main()
{
    struct Score S[2];

    for (int i = 0; i < 2; i++)
    {
        scanf("%29s %d %d", S[i].name, &S[i].kor, &S[i].eng);
    }

    struct Score result = plus_(S[0], S[1]);

    printf("%s %d %d\n", S[0].name, S[0].kor, S[0].eng);
    printf("%s %d %d\n", S[1].name, S[1].kor, S[1].eng);
    printf("%s %d %d\n", result.name, result.kor, result.eng);

    return 0;
}

