#include <stdio.h>
/*
함수
  배열안에 집어 넣고 버블솔트로 돌리기
*/
void sort3num(int * n1, int * n2, int * n3); 

int main(void) {
  int i;
  int num[3];
  printf("숫자 3개 입력 ");
  for(i=0;i<3;i++)
  {
    scanf("%d",&num[i]);
  }
  sort3num(&num[0],&num[1],&num[2]);
  return 0;
}

void sort3num(int * n1, int * n2, int * n3)
{
  int sort[3] = {*n1,*n2,*n3};
  int Bool;
  int i;
  int save;
  while(1)
  {
    Bool=1;
    for(i=0;i<2;i++)
    {
      if(sort[i]>sort[i+1])
      {
        save =sort[i] ;
        sort[i] = sort[i+1];
        sort[i+1] = save;
        Bool=0;
      }
    }
    if(Bool == 1)
    {

      printf("정렬 결과 %d %d %d",sort[2],sort[1],sort[0]);
      
      break;
    }
  }
}