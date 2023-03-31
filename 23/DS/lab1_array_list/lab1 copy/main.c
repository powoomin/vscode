#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "gelist.h"

int main()
{
	gentry e1 = {"Rob", 750}, e2 = {"Jack", 510}, e3 = {"Mike", 1105}, e4 = {"Paul", 720};
	gentry e5 = {"Minwoo", 1000}, e6 = {"Sungho", 5000};

	gelist *l;
	gelist *l2;
	
	l = gelist_alloc(5);


	gelist_add(l, e1);
	gelist_add(l, e2);
	gelist_add(l, e3);
	gelist_add(l, e4);
	gelist_print(l);
	pritnf("\n");

	gelist_remove(l, 0, l->entries);
	gelist_print(l);
	printf("\n");

	gelist_search_by_name(l,"Mike");
	printf("\n");


	gelist_search_by_name(l,"Mike");
	printf("\n");

	gelist_remove_by_name(l,"Minwoo", l->entries);
	gelist_print(l);
	printf("\n");

	
	gelist_add(l2, e6);
	gelist_add(l2, e5);

	gelist_print(l2);

	l_new = gelist_merge(l, l2);
	gelist_print(l_new);


	gelist_free(l);

	

	return 0;
}
