#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "llist.h"

llist * llist_alloc (size_t elem_size) 
{
	llist * l = (llist *) malloc(sizeof(llist)) ;

	if (l != 0x0) {
		l->head.prev = 0x0 ;
		l->head.next = &(l->tail) ;
		l->tail.prev = &(l->head) ;
		l->tail.next = 0x0 ;

		l->elem_size = elem_size ;
		l->length = 0 ;
	}

	return l ;
}

void llist_free (llist * l) 
{
	void * e = malloc(sizeof(l->elem_size)) ;
	while (l->length > 0) {
		llist_remove_first(l, e) ;
	}
	free(e) ;
	free(l) ;
}

int llist_add_first (llist * l, void * p) 
{
	llist_node * n = (llist_node *) malloc(sizeof(llist_node)) ;

	if (n == 0x0)
		return 0 ;

	n->elem = malloc(l->elem_size) ; 
	memcpy(n->elem, p, l->elem_size) ;
	n->prev = &(l->head) ;
	n->next = l->head.next ;
	l->head.next = n ;

	l->length++ ;

	return 1 ;
}

int llist_remove_first (llist * l, void * p) 
{
	if (l->length <= 0)
		return 0 ;


	llist_node * n ;
	n = l->head.next ;

	memcpy(p, n->elem, l->elem_size) ;
	n->next->prev = &(l->head) ;
	l->head.next = n->next ;

	free(n->elem) ;
	free(n) ;

	l->length-- ;

	return 1 ;
}

void llist_sort (llist * l, int (* elem_cmp)(void * e1, void * e2)) 
{
	//TODO
}
