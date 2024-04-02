#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clist.h"

clist * clist_alloc (size_t capacity, size_t elem_size) 
{
	clist * l = (clist *) malloc(sizeof(clist)) ;

	l->arr = calloc(capacity, elem_size) ;
	l->capacity = capacity ;
	l->elem_size = elem_size ;
	l->length = 0 ;

	l->head = 0 ;
	l->tail = 0 ;

	return l ;
}

void clist_free (clist * l) 
{
	free(l->arr) ;
	free(l) ;
}

int clist_add (clist * l, void * elem)
{
	if (l->length == l->capacity)
		return 0 ;

	memcpy(l->arr + l->tail * l->elem_size, elem, l->elem_size) ;
	l->tail = (l->tail + 1) % l->capacity ;
	l->length ++ ;

	return 1 ;
}

int clist_remove (clist * l, void * elem)
{
	if (l->length == 0)
		return 0 ;

	memcpy(elem, l->arr + l->head * l->elem_size, l->elem_size) ;
	l->head = (l->head + 1) % l->capacity ;
	l->length-- ;
	return 1 ;
}

int clist_resize (clist * l, size_t capacity) 
{
	//TODO
}
