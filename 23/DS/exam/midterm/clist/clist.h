typedef struct {
	size_t capacity ;
	size_t length ;
	size_t elem_size ;

	void * arr ;

	int head ;
	int tail ;

} clist ;

clist * clist_alloc (size_t capacity, size_t elem_size) ;

void clist_free (clist * l) ;

int clist_add (clist * l, void * p) ;

int clist_remove (clist * l, void * p) ;

int clist_resize (clist * l, size_t capacity) ;
