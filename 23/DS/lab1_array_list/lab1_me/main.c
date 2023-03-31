#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "gelist.h"

int main()
{
	gentry e1 = {"Rob", 750}, e2 = {"Jack", 510}, e3 = {"Mike", 1105}, e4 = {"Paul", 720};

	gelist *l;
	gentry *removedName;
	removedName = (gentry *)calloc(sizeof(gentry), 1);

	l = gelist_alloc(5);

	gelist_add(l, e1);
	gelist_add(l, e2);
	gelist_add(l, e3);
	gelist_add(l, e4);
	gelist_add(l, e1);
	gelist_add(l, e2);
	gelist_add(l, e3);
	gelist_add(l, e4);

	gelist_print(l);

	int isRemoved = gelist_remove(l, 1, removedName);
	if(isRemoved == 0){
		printf("not removed\n");
	}
	else{
		printf("{%s, %d} succesfully removed\n", removedName->name, removedName->score);
	}
	 gelist_print(l);
	char searchName[10] = "Mike";
	int index = gelist_search_by_name(l, searchName);
	if(index!=-1){
		printf("%s index is %d\n", searchName ,index);
	}
	else{
		printf("%s not found\n", searchName);
	}

	int index = gelist_remove_by_name(l, searchName, removedName);

	if (index != -1)
	{
		printf("%s index is %d\n", searchName, index);
	}
	else
	{
		printf("%s not found\n", searchName);
	}
	gelist_print(l);
	gelist_free(l);

	return 0;
}
