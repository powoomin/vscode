#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clist.h"


int main ()
{
	char * s [] = {"bb", "aa", "dd", "cc", "a", "q"} ;

	clist * l = clist_alloc(5, sizeof(char *)) ;

	clist_add(l, &(s[0])) ;
	clist_add(l, &(s[1])) ;
	clist_add(l, &(s[2])) ;
	clist_add(l, &(s[3])) ;
	clist_add(l, &(s[4])) ;
	clist_add(l, &(s[5])) ;
	
	while (l->length > 0) {
		char * e ;
		clist_remove(l, &e) ;
		printf("%s\n", e) ;
	}

}
