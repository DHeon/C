#include <stdio.h>

int main(){
    double w, h, area, perimeter;
    printf("width를 입력하시오:");
    scanf("%lf", &w);
    printf("height를 입력하시오:");
    scanf("%lf", &h);

    area = w*h;
    perimeter = 2*(w+h);

    printf("사각형의 넓이: %lf \n사각형의 둘레: %lf", area, perimeter);
}