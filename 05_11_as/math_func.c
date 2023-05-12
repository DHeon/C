#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES

int main()
{
    double result, value = 1.6;
    
    result = floor(value); // 내림 함수이기 때문에 1.0이 나오고 
    printf("%lf\n", result);
    result = ceil(value); // 올림 함수이기 때문에 2.0이 나온다.
    printf("%lf\n", result);
    
    printf("10의 절댓값은 %lf\n -10의 절댓값은 %lf\n", fabs(10), fabs(-10)); //fabs 함수는 절댓값을 반환하는 함수인데 double을 반환해서 %lf로 출력하였다.
    
    printf("10의 3승은 %f\n", pow(10.0, 3.0)); //pow는 오른쪽의 값으로 왼쪽의 값을 제곱하는 함수로 10의 3승을 나타낸다.
    printf("16의 제곱근은 %f\n", sqrt(16.0));    //sqrt는 제곱근을 구하는 함수로 16의 제곱급은 4가 나온다.
    
    double x;
    x = M_PI/2;
    printf("sin 90은 %lf 이다.\n",sin(x)); //정확한 PI값을 위해 math함수의 M_PI값을 사용하였고 pi/2는 90이기 때문에 sin 90 은 1, cos 90 은 0이 나왔다.
    printf("cos 90은 %lf 이다.\n", cos(x));
    
    
    
    return 0;
}
