typedef struct {
    char * f_name;          //음식 이름
    char * f_recipe_wiki;   //음식 레시피 위키 (내용)
    char * f_cat;           //음식 카테고리 ("cat"egory)
    int f_index;            //레시피 관리 번호
}f_recipe;

void f_recipe_add();        //요리 레시피 추가
void f_recipe_list();       //전체 출력
void f_recipe_update();     //요리 레시피 수정
void f_recipe_delete();     //요리 레시피 삭제

void f_file_lode();         //.txt 파일 읽어오기
void f_file_save();         //.txt 파일 저장하기

void f_find_name();         //이름으로 레시피 찾기
void f_find_cat();          //카테고리로 레시피 찾기
void f_find_index();        //레시피 관리 번호로 레시피 찾기

void f_random();            //음식 레피시 추천 뽑아주기
