typedef struct 
{
    int count[3]; //객실유형
    char * name; //예약자 이름
    char * rating;  // 방 등급 B S G
    char * requirements; //요청사항
    int reservation_amount; //예약금액
    char * Y_N; //삭제여부 (Y or N)

    int index;
} Score_entry;


typedef struct
{
    int max_entries ;
	int num_entries ;
	Score_entry * entries ;
} Score_list;

Score_list *Score_list_alloc(int n);

Score_entry addScore(int i);

void Score_list_free(Score_list *l);

int Score_list_add(Score_list *l);

void Score_print(Score_list * s);

void listScore(Score_list * s);

int updateScore(Score_list * s, int i);

int deleteScore(Score_list * s, int i);

void selectMenu(Score_list * s);

int Score_list_find(Score_list * l, char * c);

int print_Menu();

//--------------------------------------

void file_lode_data(Score_list *l);

void file_save_data(Score_list * l);

