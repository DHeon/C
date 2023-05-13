#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES

int main(){
    double height, distance, tree, deg, rad;
    printf("나무와의 길이(단위는 미터): ");
    scanf("%lf", &distance);
    
    printf("측정자의 키(단위는 미터):");
    scanf("%lf", &height);
    
    printf("각도(단위는 도):");
    scanf("%lf", &deg);
    
    rad = deg * (M_PI / 180.0);
    tree = tan(rad) *distance + height;
    //탄젠트 * 밑변을 하면 높이가 나오므로
    //각도를 라디안으로 바꿔서 tan(rad) 에 distance를 곱하면
    //측정자의 눈높이부터에서의 나무높이가 구해진다. 
    //거기에 측정자의 눈높이까지의 높이를 구하면 완전한 나무의 
    //높이를 구할 수 있다. 
    
    printf("나무의 높이(단위는 미터): %lf\n", tree);
    
    return 0;
}
