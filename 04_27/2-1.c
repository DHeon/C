#include <stdio.h>

int main(){
    int x = 20;
    int y = 10;

    int sum = x+y;
    int sub = x-y;
    int mul = x*y;
    int div = x/y;

    printf("두 수의 합: %d\n", sum);
    printf("두 수의 차: %d\n", sub);
    printf("두 수의 곱: %d\n", mul);
    printf("두 수의 몫: %d\n", div);

    return 0;
}