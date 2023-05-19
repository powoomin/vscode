#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char line[20];
    char c_exit;

    while(1)
    {
        printf("input : ");
        scanf("%[^\n]s",line);
        printf("%s\n",line);
        
        printf("Enter anoter line? (y for 'yes') ");
        scanf("%s",&c_exit);
        if(strcmp(&c_exit,"y")){ 
            break;
        }
        getchar();

        for(int i=0 ; i<sizeof(line) ; i++)
        {
            if(line[i] == 0x0) break;
            else
            {
                
            }
        }
    }
}