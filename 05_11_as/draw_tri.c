#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES

double rad(int degree){ //각도를 라디안으로 바꿔주는 함수입니다.
    return M_PI * degree / 180.0;
}

void draw_bar(int height){ //매개변수의 입력에 따라 *을 그려주는 함수입니다.
    for(int i = 0; i<height; i++){
        printf("*");
    }
    printf("\n");
}
int main()
{
    for(int i = 0; i<=180; i+=10){
        draw_bar((int)(60 * (sin(rad(i))+0.5))); //그냥 sin 값을 구하면 매우 작기 때문에 증폭해주었다.
    } //180도 까지 돌면서 draw_bar를 수행한다.
    
    return 0;
}
