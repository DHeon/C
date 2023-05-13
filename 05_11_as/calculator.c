#include <stdio.h>
#define _USE_MATH_DEFINES //M_PI 값을 사용하기 위해 사용합니다.
#include <math.h>

int menu(void){  //어떤 기능을 사용할지 입력받는 함수입니다
    int n;
    printf("1.팩토리얼\n");
    printf("2.싸인\n");
    printf("3.로그(base 10)\n");
    printf("4.제곱근\n");
    printf("5.순열(nPr)\n");
    printf("6.조합(nCr)\n");
    printf("7.종료\n");
    printf("선택해주세요: ");
    scanf("%d", &n);
    return n;
}
int fact(int n){ //재귀를 이용한 팩토리얼 함수입니다.
    if(n == 1) return 1;
    return n * fact(n-1);
}

void factorial(){ //메뉴의 1번을 구현한 팩토리얼입니다.
    long long n, result = 1;
    printf("정수를 입력하시오: ");
    scanf("%lld", &n);
    for (int i = 1; i<=n; i++){ 
        result = result * i; //result에 1부터 n까지 곱하면서 팩토리얼을 구합니다.
    }
    printf("결과 = \033[0;32m%lld\n\n\033[0m", result);
}

void sine(){
    double a, result;
    printf("각도를 입력하시오: ");
    scanf("%lf, &a");
    a = M_PI * 90 / 180.0;
    result = sin(a); //M_PI * 90 /180으로 라디안 값을 구하고 sin함수를 이용하여 sin 값을 구합니다.
    printf("결과 = \033[0;32m%lf\n\n\033[0m", result);
}

void logBase10(){
    double a, result;
    printf("실수값을 입력하시오:");
    scanf("%lf", &a);
    if (a <= 0.0){
        printf("%lf", a);
        printf("오류\n");
    }else{
        result = log10(a);
        printf("결과 = \033[0;32m%lf\n\n\033[0m", result); //log10 함수로 입력받은 값의 로그값을 구합니다.
    }
}
void sqr(){
    double a;
    printf("값을 입력하시오:");
    scanf("%lf", &a);
    
    printf("결과 = \033[0;32m%lf\n\n\033[0m", sqrt(a)); //sqrt 함수로 입력받은 값의 제곱근을 구합니다.
}
void npr(){
    int n, r;
    do{
        printf("n 값:");
        scanf("%d", &n);
        printf("r 값:");
        scanf("%d", &r);
        if(n < r){
            printf("r값이 n값보다 큽니다\n"); //n값이 r값보다는 커야하므로 n과 r을 비교하여 r값이 더 크면 다시 입력받게 하였습니다.
        }
    }while(n < r);
    int result = fact(n) / fact(n-r); //위에서 만든 팩토리얼 함수로 npr을 구합니다.
    printf("결과 = \033[0;32m%d\n\n\033[0m", result);
}
void ncr(){
    int n, r;
    do{
        printf("n 값:");
        scanf("%d", &n);
        printf("r 값:");
        scanf("%d", &r);
        if(n < r){
            printf("r값이 n값보다 큽니다\n");
        }
    }while(n < r);
    int result = fact(n) / fact(n-r)*fact(r); //ncr 값을 구합니다.
    printf("결과 = \033[0;32m%d\n\n\033[0m", result);
}
int main(){
    while(1){ //while문으로 계속해서 사용할수 있게 하고 switch 문을 이용해 어떤 기능을 사용할지 고릅니다.
        switch(menu()){
            case 1:
                factorial();
                break;
            case 2:
                sine();
                break;
            case 3:
                logBase10();
                break;
            case 4:
                sqr();
                break;
            case 5:
                npr();
                break;
            case 6:
                ncr();
                break;
            case 7:
                printf("종료합니다.\n");
                return 0;
            default:
                printf("잘못된 선택입니다.\n");
                break;
        }
    }
}
