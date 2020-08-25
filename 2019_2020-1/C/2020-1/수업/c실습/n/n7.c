#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
    float x; // x좌표 값
    float y; // y좌표 값
};

float calc_distance(struct point *p1, struct point *p2); // 두 점의 거리 구하는 함수

int main(void)
{
    int x, y;
    struct point *point1, *point2;
    point1 = (struct point *)malloc(sizeof(struct point));
    point2 = (struct point *)malloc(sizeof(struct point));
    printf("첫번째 좌표 x값? ");
    scanf("%f", &point1->x);
    printf("첫번째 좌표 y값? ");
    scanf("%f", &point1->y);
    printf("두번째 좌표 x값? ");
    scanf("%f", &point2->x);
    printf("두번째 좌표 y값? ");
    scanf("%f", &point2->y);
    printf("두 좌표 사이의 거리 %.1f",calc_distance(point1, point2));
    return 0;
}
float calc_distance(struct point *p1, struct point *p2)
{
    float resurt;
    float a = pow(p2->x - p1->x,2) + pow(p2->y - p1->y,2);
    resurt = sqrt(a);
    return resurt;
}
