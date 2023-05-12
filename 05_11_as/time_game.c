#include <stdio.h>
#include <time.h>

int main()
{
    time_t start, end; //time_t라는 타입으로 시간을 저장합니다.
    start = time(NULL); //프로그램이 시작하자마자의 시간을 start에 저장합니다.
    while(1){
        if(getchar()) {
            end = time(NULL);   
            break;
        }
    } //while문을 이용해서 어떤 입력이 하나라도 들어온다면 end에 입력이 들어온 시간을 저장한뒤 break 합니다.
    
    printf("종료 되었습니다.\n");
    printf("경과된 시간은 %ld 초입니다. \n", end - start); //end - start를 계산하여 프로그램이 시작하고 몇 초 뒤에 입력이 들어왔는지 알려줍니다.
    return 0;
}
