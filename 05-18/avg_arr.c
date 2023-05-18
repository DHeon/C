#include <stdio.h>

#define STUDENTS 5
int main(){
    int scores[STUDENTS];
    int sum = 0;
    int avg;
    for(int i = 0; i<STUDENTS; i++){
        printf("학생들의 성적을 입력하시오:");
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    avg = sum / STUDENTS;
    printf("성적 평균 : %d", avg);
}
