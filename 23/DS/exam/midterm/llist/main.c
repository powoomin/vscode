#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "llist.h"


int main ()
{
	char * s [] = {"bb", "aa", "dd", "cc", "a"} ;

	llist * l = llist_alloc(sizeof(char *)) ;

	llist_add_first(l, &(s[0])) ;
	llist_add_first(l, &(s[1])) ;
	llist_add_first(l, &(s[2])) ;
	llist_add_first(l, &(s[3])) ;
	llist_add_first(l, &(s[4])) ;
	
	while (l->length > 0) {
		char * e ;
		llist_remove_first(l, &e) ;
		printf("%s\n", e) ;
	}

}
