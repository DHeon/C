#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i;
    srand( (unsigned)time(NULL));  //난수의 시드를 시간으로 줌으로써 계속해서 다른 수가 나오게하였습니다.
    int forw = 0;
    int back = 0;
    for(i = 0; i<100; i++){
        if(1+rand()%2 == 1){
            ++forw;
        }else{
            ++back;
        }
    } //1과 2중 하나가 나오게 하고 총 100번 돌려 1이면 앞면이 2면 뒷면의 횟수가 1씩 증가합니다. 
    printf("동전의 앞면:%d\n", forw);
    printf("동전의 뒷면:%d", back);

    return 0;   
}
