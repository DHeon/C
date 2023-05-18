#include <stdio.h>

int main(){
    int s, e;
    while(1){
        scanf("%d", &s);
        scanf("%d", &e);
        if(s > 2 && s < 9 && e > 2 && e < 9){
            break;
        }
        printf("INPUT ERROR!\n");
    }
    
    

    for(int i = 1; i<=9; i++){
        if(s < e){
            for(int j = s; j <= e; j++){
                printf("%d * %d = %2d", j, i, j*i);
                printf("   ");
            }
        }else{
            for(int j = s; j>=e; j--){
                printf("%d * %d = %2d", j, i, j*i);
                printf("   ");
            }
        }
        printf("\n");
    }
}

//시작단과 끝단의 크기 상관 없이 구구단되는 코드.
