#include <stdio.h>

int main(){
    int oPrice;
    int mPrice;

    int cWon;
    int oWon;
    int bWon;

    printf("물건 값을 입력하시오:");
    scanf("%d", &oPrice);

    printf("투입한 금액을 입력하시오:");
    scanf("%d", &mPrice);

    printf("거스름돈은 다음과 같습니다\n\n");
    
    int change = mPrice - oPrice;
    printf("천원권: %d장\n", change/1000);
    change %= 1000;
    printf("오백원 동전:%d개\n", change/500);
    change %= 500;
    printf("백원 동전:%d개\n", change/100);
    return 0;
}