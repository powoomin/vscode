#include <cstdlib>
#include <iostream>
#include <string>
#include "linkedlist.h"
using namespace std ;
int map[20][20] ;
int visited[20][20] ;
int land_count = 0 ;
int max_area = 0 ;
int min_area = 400 ;
int curr_area = 0 ;
// 좌 우 상 하
int dy[4] = {0, 0, -1, 1} ;
int dx[4] = {-1, 1, 0, 0} ;
int ny, nx ; // ny: 지도의 높이 nx: 지도의 너비
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
void bfs(LinkedList<Loc> * worklist, int w, int h ){
    Loc use;
    int x, y ;
    while(1){
        worklist->removeFirst(&use);
        for(int i = 0 ; i < 4 ; i++){
            x = use.x + dx[i];
            y = use.y + dy[i] ;
            if(x < 0 || x >= w || y < 0 || y >= h){
                continue ;
            }
            if(visited[y][x] == 1 || map[y][x] == 0){
                continue ;
            }
            if(visited[y][x] == 0 && map[y][x] == 1){
                visited[y][x] = 1 ;
                curr_area++;
                Loc new_one(y, x) ;
                worklist->addFirst(&new_one) ;
            }
        }
        if(worklist->empty()){
            break ;
        }
    }
    land_count++;
}
int main ()
{
    LinkedList<Loc> * worklist = new LinkedList<Loc>() ;
    cin >> nx >> ny ;
    for(int i = 0 ; i < ny ; i++){
        for(int j = 0 ; j < nx ; j++){
            cin >> map[i][j] ;
            visited[i][j] = 0 ;
        }
    }
    for(int i = 0 ; i < ny ; i++){
        for(int j = 0 ; j < nx; j++){
            if(visited[i][j] == 1 || map[i][j] == 0){
                continue ;
            } else{
                visited[i][j] = 1 ;
                Loc curr(i, j) ;
                curr_area++;
                worklist->addFirst(&curr) ;
                bfs(worklist, nx, ny) ;
                if(curr_area > max_area){
                    max_area = curr_area ;
                } else if(curr_area < min_area){
                    min_area = curr_area ;
                }
                curr_area = 0 ;
            }
        }
    }
    cout << land_count << " " << min_area << " " << max_area << endl ;
    delete worklist ;
    return 0 ;
}