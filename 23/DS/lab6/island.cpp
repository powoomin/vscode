#include <cstdlib>
#include <iostream>
#include <string>

#include "linkedlist.h"

using namespace std ;

int dy[8] = { 0, -1, 0, 1} ; //왼쪽, 아래, 오른쪽, 위
int dx[8] = {-1,  0, 1, 0} ;

int map[50][50];
int visited[50][50];
int land_cnt;


class Loc {
	public :
		int y ;
		int x ;

		Loc () {} 
		Loc (int y, int x) ;
		~Loc () {} ;
} ;

Loc::Loc (int y, int x)
{
	this->y = y ;
	this->x = x ;
}

ostream& operator<<(ostream &out, const Loc& n)
{
	out << n.y << "," << n.x ;
	return out ;
}



void print_move (Loc curr, Loc begin)
{
	LinkedList<Loc> * path = new LinkedList<Loc>() ;	
	do {
		path->addFirst(&curr) ;
		curr = *(prevloc[curr.y][curr.x]) ;
	} while (curr.y != begin.y || curr.x != begin.x) ;
	path->addFirst(&begin) ;

	path->print() ;

	delete path ;
}
void bfs(struct Node* head, int w, int h);

int main ()
{
	LinkedList<Loc> * island = new LinkedList<Loc>() ;
	delete island ;

    int w, h;
    class LOC * head, *new;
    
    while(1)
    {
        scanf("%d %d", &w, &h);
        if (w == 0 && h == 0)
            break;
        land_cnt = 0;       //섬 갯수 카운팅
        
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                scanf("%d", &map[i][j]);//0,1로 맵 만들기
                visited[i][j] = 0;      //방문했는지 기록용 (0으로 초기화)
            }
        }
        //----------셋팅 완료
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(visited[i][j] == 1 || map[i][j] == 0)    //방문했는지 visited = 1, 바다인지 map = 0
                    continue;
                visited[i][j] = 1;  //방문했다는 증거 남기기

                head = (struct Node*)malloc(sizeof(struct Node));
                new = (struct Node*)malloc(sizeof(struct Node));
                new->x = i;
                new->y = j;
                new->next = NULL;
                head->next = new;
                
                bfs(head, w, h);    //주위 탐색
            }
        }
        
        printf("%d\n", land_cnt);
    }

	return 0 ;
}
