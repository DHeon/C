#include <stdio.h>

int main(){
    double x,y,z;
    printf("세 개의 실수를 입력하시오:");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("합계=%.2lf", x+y+z);
    printf("\n평균=%.2lf", (x+y+z)/3);
    return 0;
}