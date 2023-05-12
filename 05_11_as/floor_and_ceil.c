#include <stdio.h>
#include <math.h>

int main()
{
    double result, value = 1.6;
    result = floor(value); // 내림 함수이기 때문에 1.0이 나오고 
    printf("%lf ", result);
    result = ceil(value); // 올림 함수이기 때문에 2.0이 나온다.
    printf("%lf ", result);
    
    return 0;
}
