#include <stdio.h>
/*
P12
학부 영문이름 중 가장 긴 이름 찾기

name.txt 파일에 우리대학의 학부이름이 영문으로 쓰여있다. 
이 파일을 읽어서 학부 전체 갯수와 가장 이름이 긴 학부가 무엇인지 출력하라.
단, name.txt 내용은 수정금지!

Count : 13
Longest name : Global Entrepreneurship and Information, 
Communication Technology
<mind>
data.txt 파일을 읽어서 배열에 저장
Max()함수로 Max값을 리턴하여 MAX값 저장
Min()함수로 Min값을 리턴하여 MIN값 저장
1~10번까지 모두 더하고 max,min값을 뺀고 /8.0 하여 프린트
*/
float Max(float num[], int size)
{
  int i;
  float max;
  max = num[0];
  for (i = 0; i < size; i++)
  {
    if (max < num[i])
      max = num[i];
  }
  return max;
}
float Min(float num[], int size)
{
  int i;
  float min;
  min = num[0];
  for (i = 1; i < size; i++)
  {
    if (min > num[i])
      min = num[i];
  }
  return min;
}
struct nember
{
  float nums[10000];
};
int main()
{
  int i,count;
  float NUM[10];
  float max, min, sum;
  float averge;
  struct nember n;
  FILE *f;
  f = fopen("data.txt", "r");
  while (feof(f) == 0)
  {
    fscanf(f, "%f", &n.nums[i]);
    i++;
    count++;
  }
  fclose(f);

  for (i = 0; i < count; i++)
  {
    NUM[i] = n.nums[i];
  }
  int size = sizeof(NUM) / sizeof(int);
  max = Max(NUM, size);
  min = Min(NUM, size);
  for (i = 0; i < size; i++)
  {
    printf("%d번 심사점수 : %.1f\n", i + 1, NUM[i]);
    sum = sum + NUM[i];
  }
  averge = (sum - max - min) / (size - 2);
  printf("가장 큰 점수와 가장 작은 점수를 제외한 8개의 점수에 대한 평균은 %.1f 입니다.", averge);
  return 0;
}