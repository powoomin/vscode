typedef struct _llist_node {
	void * elem ;
	struct _llist_node * next ;
	struct _llist_node * prev ;
} llist_node ; 


typedef struct {
	llist_node head ;
	llist_node tail ;

	size_t elem_size ;
	size_t length ;
} llist ;

llist * llist_alloc (size_t elem_size) ;

void llist_free (llist * l) ;

int llist_add_first (llist * l, void * p) ;

int llist_remove_first (llist * l, void * p) ;

void llist_sort (llist * l, int (* elem_cmp)(void * e1, void * e2)) ;
