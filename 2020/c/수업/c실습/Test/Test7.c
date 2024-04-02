#include <stdio.h>
/*
Test 7

데이터파일로부터 C, Java 성적점수를 입력받아 각 교과목의 평균 및 각각 가장 높은 점수를 받은 사람의 이름과 점수를 출력하라.
단, 시작 시 데이터파일 2개 중 1개를 선택하도록 하여 해당 데이터를 사용하라.

이때, 숫자배열 중에 가장 큰 숫자의 인덱스를 찾아내 리턴해주는whoistop() 함수를 직접 구현하여 사용하라.

* 주의사항
- 학생들의 점수는 정수배열로 다룰 것.
- 파일에서 읽어올 때에 미리 횟수를 정하지 말 것.
- 파일을 읽는 fscanf()가 제대로 데이터를 읽었는지 확인해서 빈줄은 무시할 수 있도록 처리할 것.

실행결과 예시

Choose file : 1) data1.txt 2) data2.txt >1
8 records read.
C : average 81.6, Top - Kim [95]
Java : average 82.5, Top - Yoon [93]


Choose file : 1) data1.txt 2) data2.txt >2
9 records read.
C : average 83.8, Top - Wang [93]
Java : average 84.1, Top - Min [97]
<mind>
파일 읽어와서 각각의 배열1,2에 저장하기
저장하면서 더이상 읽을수 없을때까지 count세기
배열안에서 배열1의 평균값과 배열 2의 평균값을 구하고,
가장 큰 max c언어값과 가장 큰 max 자바값 저장하기
프린트
*/
int whoistop(int num[], int size)
{ // size 갯수만큼의 숫자배열에서 가장 큰 값의 인덱스를 찾음
    int max = 0;
    int i;
    
    for (i = 0; i < size; i++)
    {
        if (num[max] < num[i])
            max = i;
    }
    return max;
}

int main()
{
    int i;
    int count;
    char names[100][100];
    int c[100];
    int java[100];
    int sum_c=0, sum_java=0;
    float average_c, average_java;  
    int max_c, max_java;  
    printf("Choose file : 1) data1.txt 2) data2.txt >");
    scanf("%d", &i);
    FILE *f;
    if (i == 1)
    {
        i = 0;
        count = 0;
        
        f = fopen("data1.txt", "r");
        while (1)
        {
            if (feof(f))
                break;
            fscanf(f, "%s %d %d",names[i],&c[i],&java[i]);
            count++;
            i++;
        }
        count = count-1;
        fclose(f);
    }
    else if (i == 2)
    {
        i = 0;
        count = 0;
        f = fopen("data2.txt", "r");
        while (1)
        {
            if (feof(f))
                break;
            fscanf(f, "%s %d %d",names[i],&c[i],&java[i]);
            count++;
            i++;
        }
        fclose(f);
    }
    max_c=whoistop(c,count);
    max_java=whoistop(java,count);
    for(i=0;i<count;i++)
    {
        sum_c = sum_c + c[i];
        sum_java = sum_java + java[i];
    }
    average_c = (sum_c)/(count*1.0);
    average_java = (sum_java)/(count*1.0);


    printf("%d records read.\n", count);
    printf("C : average %.1f, Top - %s [%d]\n",average_c,names[max_c],c[max_c]);
    printf("Java : average %.1f, Top - %s [%d]\n",average_java,names[max_java],java[max_java]);

    return 0;
}