#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
	int l;
	char *s;
} word_t;

word_t words[370105]; // array
int n_words = 0;	  // 총 단어 갯수

// FIXME

void radix_sort()
{
	for(int i=0 ; i<10 ; i++)
		printf("words [%d] = %s\n", i, words[i].s);
	printf("\n\n------------------------------------\n\n");
	
// fixme------- test case 10개 단어만

word_t d[10];
int len;
for(int i=0 ; i<10 ; i++)
{
	d[i].s = strdup(words[i].s);
	d[i].l = strlen(d[i].s);
}

word_t bucket[27][10];
bucket = (word_t*)malloc(sizeof(word_t));


// fixme end------
	for(int i=0 ; i<10 ; i++)
		printf("words [%d] = %s\n", i, d[i].s);
}

void load_words()
{
	FILE *fp = fopen("words_rand.txt", "r");

	n_words = 0;
	while (!feof(fp))
	{
		char buf[256] = {0};

		if (fgets(buf, 256, fp) == NULL)
		{
			break;
		}
		int len = strlen(buf);
		while (!isalpha(buf[len - 1]))
		{
			buf[len - 1] = '\0';
			len--;
		}

		words[n_words].s = strdup(buf);
		words[n_words].l = len;
		n_words++;
	}
	fclose(fp);
}

int main(int argc, char **argv)
{
	load_words();

	radix_sort();
	// FIXME

	return 0;
}
