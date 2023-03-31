#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void test_glist_add_last()
{

	printf("\n<test Glist add last> \n");
	glist * l ;

	l = glist_alloc(sizeof(gentry)) ;

	gentry e1 = {"Rob", 750}, e2 = {"Jack", 510}, e3 = {"Mike", 1105}, e4 = {"Paul", 720} ;

	glist_add_last(l, &e1) ;
	glist_add_last(l, &e2) ;
	glist_add_last(l, &e3) ;
	glist_add_last(l, &e4) ;

	glist_print(l, gentry_print) ;

}

void test_glist_search()
{
	printf("\n<test Glist Search> \n");

	glist * l ;

	l = glist_alloc(sizeof(gentry)) ;

	gentry e1 = {"Rob", 750}, e2 = {"Jack", 510}, e3 = {"Mike", 1105}, e4 = {"Paul", 720} ;
	gentry e5 = {"Minwoo", 5000};
	glist_add_first(l, &e1) ;
	glist_add_first(l, &e2) ;
	glist_add_first(l, &e3) ;
	glist_add_first(l, &e4) ;

	glist_print(l, gentry_print) ;

	int num;
	num = glist_search(l, &e3, gentry_search) ;
	printf("num = %d\n",num);
	if(num != -1)
		printf("%s는 %d 번째에 있습니다 :D\n",e4.name,num);
	else
		printf("Noting :<\n");

	num = glist_search(l, &e5, gentry_search) ;
	if(num != -1)
		printf("%s는 %d 번째에 있습니다 :D\n",e5.name,num);
	else
		printf("Noting :<\n");
}

void test_glist_remove()
{
	printf("\n<test Glist remove> \n");
	glist * l ;

	l = glist_alloc(sizeof(gentry)) ;

	gentry e1 = {"Rob", 750}, e2 = {"Jack", 510}, e3 = {"Mike", 1105}, e4 = {"Paul", 720} ;

	glist_add_last(l, &e1) ;
	glist_add_last(l, &e2) ;
	glist_add_last(l, &e3) ;
	glist_add_last(l, &e4) ;

	glist_print(l, gentry_print) ;


	gentry * e;
	e = malloc(l->size); 
	glist_remove(l, 2, e);
	printf("remove entry : (%s, %d)\n", e->name, e->score);
	glist_print(l, gentry_print) ;


}

int main ()
{

	test_glist_add_last();

	test_glist_search();

	test_glist_remove();
}