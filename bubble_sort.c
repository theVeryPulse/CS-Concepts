/* A simple visualised bubble sort */

#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void show_comparison(unsigned int j)
{
	for (int k = 0; k <= j; k++)
	{
		if (k != j)
			printf("  ");
		else
			printf("^ ^");
	}
	printf("\n");
}

int *bubble_sort_clear(int ary[], size_t len)
{
	for (size_t end = len - 1; end > 0; end--)
	{
		for (unsigned int j = 0; j < end ; j++)
		{
			if (ary[j] > ary[j+1])
			{
				swap(&ary[j], &ary[j+1]);
			}
		}
	}
	return (ary);
}

int *bubble_sort(int ary[], size_t len)
{
	size_t end = len - 1;
	for ( ; end > 0; end--)
	{
		for (unsigned int j = 0; j < end ; j++)
		{
			for (int k = 0; k < len; k++)
				printf("%d ", ary[k]);
			printf("\n");
			show_comparison(j);
			if (ary[j] > ary[j+1])
			{
				printf("swawpping %d and %d\n", ary[j], ary[j+1]);
				swap(&ary[j], &ary[j+1]);
				for (int k = 0; k < len; k++)
					printf("%d ", ary[k]);
				printf("\n");
				show_comparison(j);
			}
		}
	}
	return (ary);
}

int main(void)
{
	int ary[11] = {0, 2, 8, 5, 2, 1, 4, 5, 0, 2, 7};
	bubble_sort(ary, 11);
	printf("length of ary:%zu\n", sizeof(ary)/sizeof(int));
	for (size_t i = 0; i < sizeof(ary)/sizeof(int); i++)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");
}