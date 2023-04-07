#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "llist.h"
#include "stack.h"

stack * stack_alloc (size_t elem_size)
{
    stack * s ;
    s = (stack *) malloc(sizeof(stack)) ;
    s->list = llist_alloc(elem_size) ;
    return s ;
}

void stack_free (stack * s)
{
    llist_free(s->list) ;
    free(s) ;
}

int stack_push (stack * s, void * elem)
{
    return s->list->add(s->list, elem) ;
}

int stack_pop (stack * s, void * dest) 
{
    return s->list->remove(s->list, 0, dest) ;
}

int stack_top (stack * s, void * dest) 
{
    return s->list->get(s->list, 0, dest) ;
}

int stack_contains (stack * s, void * elem2, int (* equal)(void * p1, void * p2))
{
    //TODO
    int i, size;
    void *elem1 = malloc(s->list->elem_size);
    size = s->list->size(s->list);
    for (i = 0; i < size; i++) {
        s->list->get(s->list, i, elem1);
        if (equal(elem1, elem2)) {
            free(elem1);
            return 1;
        }
    }
    free(elem1);
    return 0;
}

void stack_print (stack * s, void (* print_elem)(void * p))
{
	s->list->print(s->list, print_elem) ;
}

int stack_empty (stack * s)
{
    return (s->list->size(s->list) == 0) ;
}

int stack_size (stack * s)
{
    return s->list->size(s->list) ;
}
