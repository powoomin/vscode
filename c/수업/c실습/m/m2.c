/*
다음 구조체를 이용하여 직사각형의 가로, 세로 값을 입력받아 둘레와 면적을 계산하여 출력하라. 
struct rectangle{
 int width; // 세로
 int height; // 가로
 }; 
이 때 직사각형의 면적과 둘레를 계산하는 함수를 별도로 만들어 사용하라. 
int calc_area(struct rectangle rect); // 직사각형 면적 구하는 함수 
int calc_boundary(struct rectangle rect); // 직사각형 둘레 구하는 함수

가로 크기는? 20
세로 크기는? 10
직사각형의 면적은 200이고 둘레는 60입니다.
*/
#include <stdio.h>
struct rectangle
{
    int width;  // 세로
    int height; // 가로
};
int calc_area(struct rectangle rect);     // 직사각형 면적 구하는 함수
int calc_boundary(struct rectangle rect); // 직사각형 둘레 구하는 함수


int main()
{
    struct rectangle a;
    printf("가로 크기는? ");
    scanf("%d", &a.width);
    printf("세로 크기는? ");
    scanf("%d", &a.height);
    printf("직사각형의 면적은 %d이고 둘레는 %d입니다.\n",calc_area(a),calc_boundary(a));
    
    return 0;
}

int calc_area(struct rectangle rect)
{
    int area;
    area = rect.width * rect.height;
    return area;
}
int calc_boundary(struct rectangle rect)
{
    int boundary;
    boundary = (rect.width + rect.height)*2;
    return boundary;
}