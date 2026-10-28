#include <stdio.h>
int main() {
    int x = 2;
    int sum = 0;
    while (x < 5) { 
        sum +=x;
        x++;
    }
    printf("%d\n", sum);  
    return 0;
}