typedef struct 
{
    char * menu_name;
    char * menu_typs;
    int menu_price;
    int menu_num;

    int index;
} Menu_entry;


typedef struct
{
    int max_entries ;
	int num_entries ;
	Menu_entry * entries ;
} Menu_list;

Menu_list *Menu_list_alloc(int n);

Menu_entry addMenu(int i);


void Menu_list_free(Menu_list *l);

int Menu_list_add(Menu_list *l);

void Menu_print(Menu_list * s);

void MenuScore(Menu_list * s);

int updateMenu(Menu_list * s, int i);

int deleteMenu(Menu_list * s, int i);

int print_Menu();

int selectMenu(Menu_list * s);

int Menu_list_find(Menu_list * s, char * c);

int main(void);

//----------------------------------------

void file_lode_data(Menu_list * l);

void file_save_data(Menu_list * l);