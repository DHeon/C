#include <stdio.h>

int main(){
    float r;
    printf("반지름을 입력하시오:");
    scanf("%f", &r);
    printf("원의 면적:%f", r*r*3.14);
    return 0;
}