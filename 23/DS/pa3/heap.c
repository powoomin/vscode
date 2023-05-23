#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "heap.h"

char *node(heap_t *h, int index)
{
	return h->arr + h->usize * index;
}

int cmp(heap_t *h, int i1, int i2)
{
	return h->cmp(node(h, i1), node(h, i2));
}

void swap(heap_t *h, int i1, int i2)
{
	char *tmp = (char *)malloc(h->usize);
	memcpy(tmp, node(h, i1), h->usize);
	memcpy(node(h, i1), node(h, i2), h->usize);
	memcpy(node(h, i2), tmp, h->usize);
}

int parent(int i)
{
	return i / 2;
}

int left(int i)
{
	return i * 2;
}

int right(int i)
{
	return (i * 2 + 1);
}

heap_t *heap_alloc(int capacity, size_t usize, int (*cmp)(void *e1, void *e2))
{
	heap_t *h = malloc(sizeof(heap_t));

	h->arr = calloc(capacity + 1, usize);
	h->capacity = capacity;
	h->size = 0;
	h->usize = usize;

	h->cmp = cmp;

	return h;
}

void heap_free(heap_t *h)
{
	free(h->arr);
	free(h);
}

int heap_size(heap_t *h)
{
	return h->size;
}

int heap_min(heap_t *h, void *buf)
{
	if (h->size == 0)
		return 0;

	memcpy(buf, node(h, 1), h->usize);
	return 1;
}

int heap_insert(heap_t *h, void *buf)
{
	if (h->size == h->capacity)
		return 0;

	(h->size)++;
	memcpy(node(h, h->size), buf, h->usize);

	int curr = h->size;

	while (curr != 1 &&
		   0 < cmp(h, parent(curr), curr))
	{
		swap(h, parent(curr), curr);
		curr = parent(curr);
	}
	return 1;
}

int heap_remove(heap_t *h, void *buf)
{
	/*TODO*/
	if (h->size == 0)
		return 0; // 예외처리

	memcpy(buf, node(h, 1), h->usize); // change(cpy) node

	memcpy(node(h, 1), node(h, h->size), h->usize); // remove node => 0x0
	h->size--;

	int curr = 1;

	while ((!(h->size < left(curr)) ||
			cmp(h, curr, left(curr)) < 0) &&

		   (!(h->size < right(curr)) ||
			cmp(h, curr, right(curr) < 0)))
	{
		if (!(h->size < right(curr) ||
			  cmp(h, left(curr), right(curr)) < 0))
		{
			swap(h, curr, left(curr));
			curr = left(curr);
		}
		else
		{
			swap(h, curr, right(curr));
			curr = right(curr);
		}
	}
	return 1;
}

void heap_print(heap_t *h, char *(*elem_print)(void *e))
{
	int curr = 1;

	int c = h->size;
	int count = 0;
	int x = 1;

	while (c > 0)
	{
		c = c / 2;
		count++;
	}

	for(int l=count ; l>0 ; l--)
	{
		for(int r=1 ; r<l*2 ; r++)
		{
			printf("-");
		}
		printf("!");

		for( ; ; ){
			for(int k=1 ; k<(count+1)*2 ; k++)
			{
				printf("-");
			}
			printf("!");
		}
		printf("\n");
	}
-------!
---=-------!
-=---=---!---!
=-=-=-=-!-!-!-!



}



int heap_delete(heap_t *h, void *e)
{
	/*TODO*/
	char *s = e;
	printf("%s", s);
	return 0;
}