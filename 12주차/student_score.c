#include <stdio.h>

    struct Student
    {

        char name[50];
        // 점수 정수
        int score;
    };

int main(){
    //학생 구조체 변수 선언
    struct Student s;
    //파일 포인터 3개 선언
    FILE *fp,*pass,*fail;

    // 학생 수를 저장할 변수 선언
    int count;

    // "student.txt" 파일을 쓰기 모드로 연다
    fp = fopen("student.txt","w");

    // 만약 파일열기에 실패했다면
    if (fp == NULL){
        // 오류메세지 출력
        printf("파일 열기 실패");
        // 프로그램 종료
        return 1;
    }

    // 학생 수를 입력받는다
    printf("학생수 :");
    scanf("%d",&count);
    
    // 학생 수만큼 반복한다
    for (int i = 0; i < count; i++){
        // 학생이름을 입력받는다
        printf("\n%d번쨰 학생 이름 : ",i+1);
        scanf("%49s",s.name);

        // 학생점수를 입력받는다
        printf("\n%d번쨰 학생 점수 : ",i+1);
        scanf("%d",&s.score);

        // 학생 이름과 점수를 student.txt 에 저장한다
        fprintf(fp,"%s %d\n",s.name,s.score);
    }

    // 파일을 닫는다
    fclose(fp);

    // student.txt 파일을 읽기모드로 열기
    fp = fopen("student.txt","r");

    // pass.txt 파일을 쓰기모드로 열기
    pass = fopen("pass.txt","w");
    // file.txt 파일을 쓰기모드로 열기
    fail = fopen("fail.txt","w");

    // 하나라도 열기 실패하면
    if(fp == NULL || pass == NULL || fail ==NULL){
        // 오류메세지 출력
        printf("파일 열기 실패");
        // 성곡적으로 열린 파일 닫기
        if(fp != NULL) fclose(fp);
        if(pass != NULL) fclose(pass);
        if(fail != NULL) fclose(fail);
        //프로그램 종료
        return 1;
    }

    // 파일에서 이름과 점수를 모두 읽을 수 읽는 동안 반복한다
    // 읽은 데이터를 학생 구조체에 저장한다
    while(fscanf(fp,"%49s %d",s.name,&s.score)==2){
        // 점수가 80점 이상이면
        if (s.score >=80){ //그렇다면
            // pass.txt에 이름과 점수 저장
            fprintf(pass,"%s %d\n",s.name,s.score);
        }
        else{ //그렇지 않다면
            // fail.txt에 이름과 점수 저장
            fprintf(fail,"%s %d\n",s.name,s.score);
        }
    }

    // 열려있는 세 파일을 모두 닫는다
    fclose(fp);
    fclose(pass);
    fclose(fail);

    // 파일 저장및 분류 완료! 를 줄력한다
    printf("파일 저장및 분류 완료!");
}