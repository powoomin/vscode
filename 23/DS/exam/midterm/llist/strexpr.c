#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "llist.h"

char * eval (char ** input, size_t length)
{
	//TODO
	char * c;
	c = malloc(sizeof(length));

	// 	if(strcmp(input[i], "+") != 0 || strcmp(input[i], "2") != 0)

	llist * l = llist_alloc(sizeof(char *));
	int i = 0;
	while(1)
	{	

		if(l->head.next->elem == 0x0)
		{
			llist_add_first(l, &input[i]);
		}
		else if(strcmp(l->head.elem, "+") == 0 )
		{
			printf("okn\n");
		}

	}
	

	return 0;
}

int main ()
{
	char * input [] = {"a", "b", "2", "+", "2"} ;
	char * r ;

	r = eval(input, 5) ;

	printf("%s\n", r) ;

	free(r) ;

	return 0 ;
}
