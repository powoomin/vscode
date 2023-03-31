#include <stdio.h>
#include "gentry.h"
#include "glist.h"

// TO DO
int gentry_search (void * p)
{
    glist_node * n = (glist_node *) p;

    if(n->elem == n->next->elem)
        return 1;

    return 0;
}

void gentry_print (void * p)
{
	gentry * e = (gentry *) p ;
	printf("(%s, %d) ", e->name, e->score) ;
}


int main ()
{
	glist * l ;

	l = glist_alloc(sizeof(gentry)) ;

	gentry e1 = {"Rob", 750}, e2 = {"Jack", 510},\
    e3 = {"Mike", 1105}, e4 = {"Paul", 720} ;

	int i = glist_add_last(l, &e1) ;
	int j = glist_add_last(l, &e2) ;
	int k = glist_add_last(l, &e3) ;
	int m = glist_add_last(l, &e4) ;

	glist_print(l, gentry_print) ;

	gentry e ; 
    printf("%d\n", glist_search(l, &e4, gentry_search));
    printf("%d\n", glist_remove(l, 1, &e));
	glist_print(l, gentry_print) ;
	printf("%s, %d", e.name, e.score);

	// glist_remove_first(l, &e) ;
	// glist_print(l, gentry_print) ;

	glist_free(l) ;

	return 0 ;
}