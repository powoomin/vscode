#include <stdio.h>

/*
P10
비만 판정 함수버전에서 데이터를 파일로 읽도록 작성하라.

비만도계산기능을 수행하는 함수를 작성하여 사용할 것.

float evalbmi(int height, int weight);
// height : 신장(cm 단위)
// weight : 체중(kg 단위)
// 리턴값 : 비만도
// 수행내용 : 파라미터로 받은 신장, 체중을 가지고 비만도를 계산하여       

data.txt 파일에 들어있는 10명의 신장(cm단위)과 체중(kg단위)를 입력받은 후, 
이들 중 몇 번째 사람들이 비만인지를 판정하여 출력하라. 
그리고 도합 몇 명이 비만인지 출력하라.
단, 비만여부는 다음 비만도 수치가 25이상인 경우에 "비만"으로 판단한다.
비만도 수치 = 체중(kg) / (신장(m)의 제곱) 으로 계산한다. 
이 때, 신장은 미터 단위로 환산해야 함을 유 의하라. 
 
변수는 다음과 같이 사용하라. 
int height[10], weight[10]; // 10명의 신장(cm), 체중(kg)
float bmi[10]; // 10명의 비만도 수치
int count; // 비만인 사람의 숫자
int i;  // 반복문을 위한 변수  

실행 예)
10명의 데이터를 읽었습니다.
2번째 사람은 비만
5번째 사람은 비만
6번째 사람은 비만

총 3명의 사람이 비만

txt 파일 안에서 1명씩 값을 가져와 비만일경우 바로 프린트
    '10명의 데이터를 읽었씁니다.' 프린트
    txt 파일 안에서 키, 체중값 가져오기 1명씩
    함수 안에서 가져온 값으로 비만 확인하기
    비만일 경우 바로 '%d번째 사람은 비만' 프린트
    count +1 하기
    더이상 가져올 값이 없을경우 '총 %d명의 사람이 비만'프린트
*/

float evalbmi(int height, int weight)
{
    float bmi;
    bmi = (weight * 1.0) / (height * height * 1.0) * 10000;
    printf("bmi = %f\n", bmi);
    return bmi;
}

struct nember
{
    int height[10];
    int weight[10];
};

int main()
{
    int i;
    float bmi[10];
    int count = 0;
    struct nember n;
    FILE *f;
    f = fopen("data.txt", "r");
    while (feof(f) == 0)
    {
        fscanf(f, "%d %d", &n.height[i], &n.weight[i]);
        i++;
    }
    fclose(f);
    printf("10명의 데이터를 읽었습니다.");
    for (i = 0; i < 10; i++)
    {
        bmi[i] = evalbmi(n.height[i], n.weight[i]);
        if (bmi[i] >= 25)
        {
            printf("%d번째 사람은 비만\n", i + 1);
            count++;
        }
    }
    printf("총 %d명의 사람이 비만", count);
    return 0;
}
