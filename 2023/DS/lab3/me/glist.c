#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "glist.h"

glist *glist_alloc(size_t s)
{
    glist *l = (glist *)malloc(sizeof(glist));
    l->head = 0x0;
    l->size = s;
    return l;
}

void glist_free(glist *l)
{
    while (l->head != 0x0)
    {
        glist_remove_first(l, 0x0);
    }
}

int glist_search(glist *l, void *s, int (*elem_cond)(void *))
{
    glist_node *n = (glist_node *)malloc(sizeof(glist_node));
    n->elem = s;
    n->next = l->head;

    for (int index = 0; n->next != 0x0; n->next = n->next->next, index++)
        if (elem_cond(n) == 1)
            return index;

    return -1;

}

int glist_add_first(glist *l, void *s)
{
    glist_node *n = (glist_node *)malloc(sizeof(glist_node));
    n->elem = malloc(l->size);
    memcpy(n->elem, s, l->size);
    n->next = l->head;
    l->head = n;
	return 1;
}

int glist_add_last(glist *l, void *s)
{
    // TO DO
    glist_node *n = (glist_node *)malloc(sizeof(glist_node));
    if (l->head == 0x0)
    {
        l->head = n;
    }
    else
    {
        glist_node *find;
        for (find = l->head; find->next != 0x0; find = find->next)
            ;
        find->next = n;
    }

    n->elem = s; //memcpy 쓰기
    n->next = 0x0;

    return 1;
}

int glist_remove(glist *l, int i, void *s)
{
    glist_node *n;
	glist_node *prev_n;
	n = l->head;
    for (int j=0 ; j < i; j++)
    {
        prev_n = n;
        n = n->next;
    }
    memcpy(s, n->elem, l->size);
    
    if(n->next == 0x0)
    {
        n = 0x0;
    }
    else
    {
        n = n->next;
        prev_n->next = n;
    }
    return 1;
}

int glist_remove_first(glist *l, void *s)
{
    if (l->head == 0x0)
        return 0;

    glist_node *n = l->head;
    l->head = n->next;
    if (s != 0x0)
    {
        memcpy(s, n->elem, l->size);
    }
    free(n);
    return 1;
}

void glist_print(glist *l, void (*elem_print)(void *))
{
    glist_node *i;
    for (i = l->head; i != 0x0; i = i->next)
    {
        elem_print(i->elem);
        printf(" ");
    }
    printf("\n");
}