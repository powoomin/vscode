typedef struct _llist_node {
	void * elem ;
	struct _llist_node * next ;
} llist_node ; 


typedef struct {
	llist_node * head ;
	size_t length ;
} llist ;

list * llist_alloc (size_t s) ;

void llist_free (list * l) ;

int llist_add (list * l, void * s) ;

int llist_get (list * l, int i, void * s) ;

int llist_remove (list * l, int i, void * s) ;

int llist_size (list * l) ;

void llist_print (list * l, void (* elem_print)(void *)) ;
