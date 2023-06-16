#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char * words [370105] ;
int n_words = 0 ;

//FIXME

void load_words ()
{
	FILE * fp = fopen("words.txt", "r") ;

	n_words = 0 ;
	while (!feof(fp)) {
		char buf[256] = { 0 } ;

		if (fgets(buf, 256, fp) == NULL) {
			break ;
		}
		int len = strlen(buf) ;
		while (!isalpha(buf[len - 1])) {
			buf[len - 1] = '\0' ;
			len-- ;
		}

		words[n_words] = strdup(buf) ;
		n_words++ ;
	}
	fclose(fp) ;
}

int main (int argc, char ** argv)
{
	load_words() ;


	//FIXME

	return 0 ;
}
