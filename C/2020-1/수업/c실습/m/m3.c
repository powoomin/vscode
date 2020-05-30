#include <stdio.h>
#include <math.h>
//sqrt(num) = 제곱근
//pow(num,2) = 제곱
/*
[M03] 좌표 거리 계산 
    
다음 구조체를 이용하여 2개의 좌표 데이터를 입력받아 이를 출력하고, 
두 좌표 사이의 거리를 출력하라. 
struct point{ 
     float x; // x좌표 값 
     float y; // y좌표 값 
}; 

단, 두 좌표 사이의 거리 계산은 별도의 함수를 만들어 사용하되, 
계산 방법은 (x값의 차이)2+(y값의 차 이)2의 제곱근이다. 
계산할 때에 sqrt()와 pow()함수를 사용하라.
float calc_distance(struct point p1, struct point p2); 
// 두 점의 거리 구하는 함수

실행 예) 
첫번째 좌표의 x값? 1.0
첫번째 좌표의 y값? 1.0
두번째 좌표의 x값? 4.0
두번째 좌표의 y값? 5.0

두 좌표 사이의 거리는 5.0

<mind>
1. 2개의 좌표 데이터를 입력받아 (각각의 x,y)
2. 두 좌표 사이의 거리를 출력하라.
    피타고라스 정리
        (두번쨰x - 첫번째x)^2 + (두번쨰y - 첫번째y)^2
*/
struct point
{
    float x; // x좌표 값
    float y; // y좌표 값
};
float calc_distance(struct point p1, struct point p2);

int main()
{
    struct point p1;
    struct point p2;

    printf("첫번째 좌표의 x값? ");
    scanf("%f", &p1.x);
    printf("첫번째 좌표의 y값? ");
    scanf("%f", &p1.y);
    printf("두번째 좌표의 x값? ");
    scanf("%f", &p2.x);
    printf("두번째 좌표의 y값? ");
    scanf("%.1f", &p2.y);

    printf("두 자표 사이의 거리는 %f", calc_distance(p1, p2));
}

float calc_distance(struct point p1, struct point p2)
{
    float distance;
    distance = sqrt(pow((p2.x - p1.x), 2.0) + pow((p2.y - p1.y), 2.0));

    return distance;
}