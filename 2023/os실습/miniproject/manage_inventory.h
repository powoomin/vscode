typedef struct equipment
{
    char * name;
    int price;
    short broken;
    char * categories;
    int as;
    int payment_date;
} e_entry;

typedef struct
{
    int max_entry;
    int num_entry;
    e_entry * entries;
} e_list;

e_list * e_list_alloc(int num);

int e_list_add(e_list * l);

e_entry e_entry_add();

void e_list_print(e_list * l);

int e_list_update(e_list * l, int index);

int e_list_delete(e_list * l, int index);

char e_list_find(e_list * l, char * name);

