#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    // 왼쪽 = 0번 인덱스으로 한다
    // 오른쪽 = 사이즈 -1 번 인덱스로 한다

    // 왼쪽이 오른쪽의 값보다 작거나 같을 동안 반복한다
        // 인덱스 = 왼쪽과 오른쪽을 더하고 2로 나눈다

        // 인덱스 값이 타겟과 같으면
            //인덱스를 반환한다

        // 인덱스 값이 타겟보다 값이 작으면  
            //왼쪽    = 결과 +1

        // 인덱스 값이 타겟보다 값이 크면    
            //오른쪽  = 결과 -1
            
    // 탐색 실패시 -1을 반환한다


    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int index = (left + right) / 2;

        if (arr[index] == target) {
            return index;
        } else if (arr[index] < target) {
            left = index + 1;
        } else {
            right = index - 1;
        }
    }

    return -1;
}

int main(){
    int arr[]={2,5,8,12,16,23,38,56,72,91};
    int size =sizeof(arr)/sizeof(arr[0]);
    int target =23;
    int result = binarySearch(arr,size,target);

    if (result != -1){
        printf("원소 %d는 인덱스 %d에 존재합니다.\n",target,result);
    }
    else{
        printf("원소를 찾기 못했습니다");
    }
}