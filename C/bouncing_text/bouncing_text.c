/***

    This program reads a text from the user and scrolls it in left and right directions.

    Misson: Extend this program to bouncing_text.c that bounces the input text. (50 pts.)
            (See bouncing_text.mp4 or run bouncing_text.exe.)
            - The text should bounce not only horizontally but also vetically.
            - On every horizontal bounce, the text should be horizontally reversed.
                Ex) Welcome! --> !emocleW --> Welcome!
            - On every vertical bounce, the text should switch case. (upper case <-> lower case)
                Ex) Welcome! --> wELCOME! --> Welcome!

    Set the initial direction to (2, 1), i.e. set dx = 2, dy = 1

    Compile (Windows):  gcc scroll_text.c Console.c -D_WINDOWS      (this program)
                        gcc bouncing_text.c Console.c -D_WINDOWS    (your solution)

    Compile (Mac):      gcc scroll_text.c Console.c -D_MAC          (this program)
                        gcc bouncing_text.c Console.c -D_MAC        (your solution)

***/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "Console.h"


int main()
{
    char text[256];
    int width = getWindowWidth();
    int height = getWindowHeight() - 1;

    clrscr();
    gotoxy(1, 1);

    printf("Input a text: ");
    fgets(text, 255, stdin);
    int len = strlen(text) - 1;
    text[len] = 0;                  // trim '\n'

    printf("Press 'q' to quit.\n");

    int x = 1, y = height / 2;
    int dx = 2;
    int dy = 1;
    char temp;
    int i =0, 

    gotoxy(x, y);
    printf("%s", text);

    EnableCursor(0);

    // Repeat on x from 2 to width - len
    while(1){
        if(kbhit() && getch() == 'q')
            break;
        
        // save old coordinate
        int oldx = x;
        int oldy = y;
        
        // update coordinate
        x += dx;
        y += dy;

        if(x > width - len + 1){        // right bouncing
            x = 2 * (width - len - 1) - x;
            dx = -dx;
        
            //horizontally reverse
            for(i=0;i<(len/2);i++){
                temp=text[i];
                text[i]=text[(len-1)-i];
                text[(len-1)-i]=temp;
            }
        }

        if(x < 1){                  // left bouncing
            x = 1 - (x - 1);
            dx = -dx;
            
            //horizontally reverse

            for(i=0;i<(len/2);i++){
                temp=text[i];
                text[i]=text[(len-1)-i];
                text[(len-1)-i]=temp;
            }
        }
        
        //아래의 벽에 닿으면 변경하도록
        if(y>height-len+1){
            x=2*(height-len-1)-y;
            dy=-dy;
            //vertically change
            for (i=0; i<len;i++){
                if (isupper(text[i])){
                    text[i]=tolower(text[i]);
                }
                else if (islower(text[i])){
                    text[i]=toupper(text[i]);
                }
            }
        }
        //위의 벽에 닿으면 변경하도록
        if(y<1){
            y=1-(y-1);
            dy=-dy;
            //verticallychange
            for (i=0; i<len;i++){
                if (isupper(text[i])){
                    text[i]=tolower(text[i]);
                }
                else if (islower(text[i])){
                    text[i]=toupper(text[i]);
                }
            }
        }
    }

    //  erase previous coordinate        
    gotoxy(oldx, oldy);
    for(int i = 0; i < len; i++)
        putchar(' ');

    //  draw at new coordinate
    gotoxy(x, y);
    printf("%s", text);
    fflush(stdout);

    //  delay
    MySleep(100);
    }

    clrscr();
    gotoxy(1, 1);
    printf("Bye!\n");

    EnableCursor(1);

    return 0;
}