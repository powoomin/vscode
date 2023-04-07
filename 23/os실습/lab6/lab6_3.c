#include <stdio.h>

int main(void)
{
	printf("size? ");
	
	int size;
	scanf("%d",&size);

	for(int i=1; i<=size; i++)
	{
		for(int j=0; j<i; j++)
		{
			printf("*");
		}
		for(int j=0; j<(size-i)*2; j++)
		{
			printf(" ");
		}
		for(int j=0; j<i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=size-1; i>0; i--)
	{
		for(int j=i; j>0; j--)
		{
			printf("*");
		}
		for(int j=0; j<(size-i)*2; j++)
		{
			printf(" ");
		}
		for(int j=i; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}

}
