#include <stdio.h>

int main(){
    int x, y;
    scanf("%d\n%d", &x, &y);
    
    int o = y%10;
    int t = (y/10)%10;
    int b = y/100;

    int t1 = x*o;
    int t2 = x*t;
    int t3 = x*b;
    
    int result = t1+t2*10+t3*100;

    printf("%d\n%d\n%d\n%d", t1,t2,t3,result);
}