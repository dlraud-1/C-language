#include <stdio.h>

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selectionSort(int a[], int size) {
    int min, temp;
    
    for (int i = 0; i < size-1; i++) {
        min = i; 

        for (int j = i; j < size-1; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main() {
    int list[] = {69, 10, 30, 2, 16, 8, 31, 22};
    int size = sizeof(list) / sizeof(list[0]);
    
    printf("정렬 전: ");
    printArray(list, size);
    
    selectionSort(list, size);
    
    printf("정렬 후: ");
    printArray(list, size);
    
    return 0;
}