//코딩 시작 오후 4시 52분
//코딩 마침 오후 5시 36분
//코딩 시간 44분
#include <stdio.h>
int num[5][5], i, j, row, col, count=0 ;
int Bool_row, Bool_col, bingo_row,bingo_col;
int count_row, count_col;
int main()
{
    while(1)
    {
        //1.input_num
        printf("Enter row(1~5) and col(1~5) > ");
        scanf("%d %d",&row,&col);
        if((row>0 && row<6) && (col>0 && col<6))
        {
            if(num[row-1][col-1]==-1)
            {
                printf("(%d, %d) already marked!\n",row,col);
            }
            else
            {
                num[row-1][col-1] = -1;
                count++;
            }
        }
        else
        {
            break;
        }
        //2.cheak
        Bool_row = 0;
        Bool_col = 0;
        if(count>=5)
        {
            //2-1. Row
            for(i=0;i<5;i++)
            {
                count_row =0 ;
                for(j=0;j<5;j++)
                {
                    if(num[i][j] == -1)
                    {
                        count_row++;
                    }
                }
                if(count_row == 5)
                {
                    Bool_row = 1;
                    bingo_row = i+1;
                    break;
                }
            }
            //2-2. Col
            for(j=0;j<5;j++)
            {
                count_col = 0;
                for(i=0;i<5;i++)
                {
                    if(num[i][j]==-1)
                    {
                        count_col++;
                    }
                }
                if(count_col==5)
                {
                    Bool_col = 1;
                    bingo_col = j+1;
                    break;
                }
            }
            if(Bool_row == 1 || Bool_col == 1) break;
        }
    }
    if(Bool_row == 1) printf("BINGO! #%d row is marked all!\n",bingo_row);
    if(Bool_col == 1) printf("BINGO! #%d column is marked all!\n",bingo_col);
    printf("EXIT! %d tried!",count);
}