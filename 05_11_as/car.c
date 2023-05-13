#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void carGo(int num, int distance){
    printf("%d번 차:",num);
    for(int i = 0; i<distance; i++){
        printf("*");
    }
    printf("\n");
} //차 번호와 거리를 입력받아 몇 번째차의 distance만큼 *을 찍습니다. 

void main(){
    int car1_Dis, car2_Dis, car3_Dis;

    srand((unsigned)time(NULL)); //계속해서 랜덤한 값을 얻기 위해 시드를 시간으로 줍니다.
    for (int i = 0; i<=6; i++){
        car1_Dis = rand()%100;  //각 차가 0~99 사이의 숫자를 얻습니다. 
        car2_Dis = rand()%100;
        car3_Dis = rand()%100;
        carGo(1, car1_Dis); //carGo함수에 각 번호와 거리를 매개변수로 넘깁니다.
        carGo(2, car2_Dis);
        carGo(3, car3_Dis);
        printf("----------------\n"); //구분선입니다.
    }
}
