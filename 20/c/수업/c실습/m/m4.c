#include <stdio.h>
/*
다음 구조체를 이용하여 직사각형 2개의 좌상점의 좌표값(x, y)와 
우하점의 좌표값(x, y)을 입력받아 면적 을 계산하고 어떤 직사각형이 큰 지 출력하라. 
이 때 직사각형의 면적을 계산하는 함수를 별도로 만들어 사용하라. 

struct rectangle{
 int x1, y1; // 좌상점 좌표값 (왼쪽 위 모서리)
 int x2, y2; // 우하점 좌표값 (오른족 아래 모서리)
}; 

int calc_area(struct rectangle rect); // 직사각형 면적 구하는 함수

첫번째 직사각형의 좌상점 좌표값(x, y)은? 1 3
첫번째 직사각형의 우하점 좌표값(x, y)은? 4 1
두번째 직사각형의 좌상점 좌표값(x, y)은? 2 5
두번째 직사각형의 우하점 좌표값(x, y)은? 5 1

첫번째 직사각형의 크기 : 6
두번째 직사각형의 크기 : 12
두번째 직사각형의 면적이 더 큽니다.
<mind>
두개의 각각의 좌상,우하 점을 입력받아 구조체에 저장한다
각각의 면적을 구하여 리턴하여 저장한다
리턴된 값을 비교하여 더 큰것을 프린트한다
*/
struct rectangle
{
    int x1, y1; // 좌상점 좌표값 (왼쪽 위 모서리)
    int x2, y2; // 우하점 좌표값 (오른족 아래 모서리)
};
int calc_area(struct rectangle rect); // 직사각형 면적 구하는 함수
int main()
{
    struct rectangle n[2];

    printf("첫번째 직사각형의 좌상점 좌표값(x, y)은? ");
    scanf("%d %d", &n[0].x1, &n[0].y1);
    printf("첫번째 직사각형의 우하점 좌표값(x, y)은? ");
    scanf("%d %d", &n[0].x2, &n[0].y2);
    printf("두번째 직사각형의 좌상점 좌표값(x, y)은? ");
    scanf("%d %d", &n[1].x1, &n[1].y1);
    printf("두번째 직사각형의 우하점 좌표값(x, y)은? ");
    scanf("%d %d", &n[1].x2, &n[1].y2);
    int area1 = calc_area(n[0]);
    int area2 = calc_area(n[1]);
    printf("첫번째 직사각형의 크기 : %d\n두번째 직사각형의 크기 : %d\n",area1,area2);
    if (area1 > area2)
    {
        printf("첫번째 직사각형의 면적이 더 큽니다.");
    }
    else
        printf("두번째 직사각형의 면적이 더 큽니다.");
    return 0;
}
int calc_area(struct rectangle rect)
{
    int area;
    area = (rect.x2 - rect.x1) * (rect.y2 - rect.y1);
    return area;
}