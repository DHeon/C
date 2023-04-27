#include <stdio.h>

int main(){
    float x;
    float won;
    printf("환율을 입력하시오:");
    scanf("%f", &x);
    printf("원화 금액을 입력하시오:");
    scanf("%f", &won);
    printf("원화 %.0f원은 %f달러입니다.", won,won/x);
    return 0;
}