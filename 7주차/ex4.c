#include <stdio.h>
#define MAX_students 50

void bubbleSortAscending(int *arr,int n){
    for(int i = 0; i < n -1; i++){
        for(int j =0; j < n -1 -i;j++){
            if (*(arr + j) > *(arr + j + 1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1 ) = temp;
            }
        }
    }
}

int main(){
    int students;

    printf("학생수를 입력하세요 (최대 %d명): ",MAX_students);
    scanf("%d", &students);
    if (students > MAX_students){
        printf("학생수가 %d명이 넘었습니다 프로그램을 종료합니다",MAX_students);
        return 1;
    }

    int *scorePointer;
    int score[MAX_students];
    scorePointer = score;

    for(int i = 0; i < students; i++){
        printf("%d번째 학생의 성적을 입력해주세요: ",i+1);
        scanf("%d",scorePointer+i);
    }
    
    bubbleSortAscending(scorePointer,students);

    printf("\n정렬된 성적: ");
    for (int i=0; i<students; i++){
        printf("%d ",*(scorePointer+i));
    }
    printf("\n최고 성적: %d",*(scorePointer+students-1));
    printf("\n최하 성적: %d",*scorePointer);

    return 0;
}