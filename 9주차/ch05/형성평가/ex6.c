#include <stdio.h>

int main() {
    int x = 50;
    int A,B,C;
    A = x; 
    scanf("%d", &x);

    if (x >= 80) {  
        B = x;    
        x += 10;
    } else {        
        B = x;   
        x -= 5;
    }
    C = x;
    x--;


    printf("%d %d %d\n", A, B, C);
    return 0;
}
