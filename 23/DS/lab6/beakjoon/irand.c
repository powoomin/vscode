#include <stdio.h>
#include <stdlib.h>

int map[50][50];
int visited[50][50];
int land_cnt;

int x[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int y[8] = {0, 0, 1, -1, 1, -1, 1, -1};

struct Node{
    int x;
    int y;
    struct Node * next;
    
};

void bfs(struct Node* head, int w, int h);

int main(void){
    int w, h;
    struct Node * head, *new;
    
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
}

void bfs(struct Node *head, int w, int h){
    struct Node *temp, *new, *use;
    int X, Y;
    
    use = head->next; //use = 첫번째 노드
    
    while(head->next != NULL){
        temp = head->next;  //temp = 첫번째 노드
        
        for(int i=0; i<8; i++){
            X = temp->x + x[i]; //노드에 있는 좌표x 값으로부터 + 1씩 저장
            Y = temp->y + y[i]; //노드에 있는 좌표y 값으로부터 + 1씩 저장
            
            if( X < 0 || X >= h || Y<0 || Y >= w ){ //
                continue;
            }
            if(visited[X][Y] == 1 || map[X][Y] == 0){ //방문한 적 있거나, 바다이거나
                continue;
            }
            
            visited[X][Y] = 1;  //그 좌표에는 다녀왔다 찍기
            new = (struct Node*)malloc(sizeof(struct Node)); //새로운 노드 맨뒤에 추가
            new->x = X;
            new->y = Y;

            new->next = NULL;
            use->next = new;
            use = use-> next;
        }
        
        head->next = temp->next;    //첫번째 노드 지우기
        free(temp);
    }
    land_cnt++;
}