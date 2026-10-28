#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, key;
    // 두 번째 원소부터 시작
    for (i = 1; i < n; i++) {
        key = arr[i];
        
        for (j = i - 1; j >= 0 && arr[j] < key; j--) {
            arr[j + 1] = arr[j];
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {7, 12, 6, 11, 3, 8, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("정렬 전: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, n);

    printf("정렬 후: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}