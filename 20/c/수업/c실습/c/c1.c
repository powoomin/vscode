#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num;
int p_num;
int i,j;
int Bool=1;
int main(){
    while(1){
        printf("Enter size >> ");
        scanf("%d",&num);
        if(num>-1 && num<101) break;
        else printf("0~100 사이의 수만 입력해 주세요\n");
    }
    int input_user_num[num];
    int produce_num[num];
    int count;
    srand(time(NULL));
    for(i=0;i<num;i++){
        while(1){
            Bool=1;
            p_num = rand()%100;
            for(j=0;j<i;j++){
                if(produce_num[j]==p_num) Bool=0;
            }
            if(Bool==1){
                produce_num[i] = p_num;
                break;
            }
        }
    }
    for(i=0;i<100;i++){
        Bool=1;
        for(j=0;j<num;j++){
            if(produce_num[j]==i) {
                printf("@");
                count++;
                if(count%10==0) printf("\n");
                Bool=0;
            }
        }
        if(Bool==1){
            printf("+");
            count++;
            if(count%10==0) printf("\n");
        }
    }
    printf("\n");
}