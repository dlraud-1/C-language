#include <stdio.h>

#define MAX_SIZE 10

int main(){
    int ary[] = {1,2,3,4,5,6,7,8,9,10};
    int *Tstart;
    int *TEnd;

    printf("Array forward : ");
    for (Tstart = ary,TEnd = ary + MAX_SIZE; Tstart < TEnd; Tstart++)
        printf("%3d",*Tstart);
    printf("\n");

    printf("Array backword: ");
    for (Tstart = TEnd -1; Tstart >= ary; Tstart--)
        printf("%3d",*Tstart);
    printf("\n");

    return 0;
}