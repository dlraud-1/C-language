#include <stdio.h>

int main()
{
    int a[7];
    int b[7] = {0};

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
        if (a[i] == 1){
            b[1] += 1;
        }
        else if (a[i] == 2){
            b[2] += 1;
        }
        else if (a[i] == 3){
            b[3] += 1;
        }
        else if (a[i] == 4){
            b[4] += 1;
        }
        else if (a[i] == 5){
            b[5] += 1;
        }
        else if (a[i] == 6){
            b[6] += 1;
        }
    }

    printf("\n");

    for (int i =1 ; i<7; i++){
        printf("%d : %d\n", i, b[i]);
    }
    
}