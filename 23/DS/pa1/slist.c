#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "slist.h"

slist * slist_alloc (size_t elem_size, int (* compare)(void * e1, void * e2)) 
{
	slist *l = (slist *)malloc(sizeof(slist));
	l->elem_size = elem_size;
	l->head.next = 0x0;
	l->head.prev = 0x0;
	l->tail.next = 0x0;
	l->tail.prev = 0x0;
	return l;
}

void slist_free (slist * l)
{
	free(l);
}

int slist_length (slist * l)
{
	int count =0;
	slist_node * i = (slist_node *)malloc(sizeof(slist_node));
	for(i = l->head.next; i != 0x0; i = i->next)
	{
		count++;
	}
	return count;
}

int slist_search (slist * l, int (* elem_cond)(void * e))
{
	int i = elem_cond(l->head.elem);
	return 0;
}

int slist_add (slist * l, void * e)
{
	
	slist_node *n = (slist_node *)malloc(sizeof(slist_node));
	n->elem = malloc(sizeof(l->elem_size));
	memcpy(n->elem, e, l->elem_size);

	if(n->elem == 0x0)
		return 0;

	if(l->head.next == 0x0)
	{
		l->head.next = n;
		l->tail.prev = n;
		return 1;
	}
	else
	{
		n->next = l->head.next;
		l->head.next = n;

		slist_node *find;
		for(find = l->tail.prev; find->prev != 0x0; find = find->prev);
		find->prev = n;

		return 1;
	}

	return 0;
}

int slist_remove (slist * l, int i, void * e)
{
	return 0;
}

void slist_print (slist * l, void (* elem_print)(void * e))
{
	slist_node * i = (slist_node *)malloc(sizeof(slist_node));
	printf("next : ");
	for(i = l->head.next; i != 0x0; i = i->next)
	{
		elem_print(i->elem);
		printf(" ");
		
	}
	printf("\n\nprev : ");
	for(i = l->tail.prev; i != 0x0; i = i->prev)
	{
		elem_print(i->elem);
		printf(" ");
		
	}
}

slist * slist_merge(slist * l1, slist * l2)
{
	return 0;
}
