#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 15

int		*bubble_sort(int *ary, int len);
void	selection_sort(int *ary, int len);
int		*merge_sort(int *ary, int len);
void	merge_sort_b(int *ary, int len);
void	iterative_merge_sort(int *ary, int len);
void	insertion_sort(int *ary, int len);
void	quick_sort(int *ary, int len);

static void	init_int_ary(int *ary, int len);
static void	print_ary(int *ary, int len);
static void	randomize(int *ary, int len);
static void	check_ary(int *ary, int len);

int	main(void)
{
	int	ary[ARRAY_SIZE];
	int	len = ARRAY_SIZE;

	/* Bubble sort */
	printf("\nBubble sort\n");
	init_int_ary(ary, len);
	bubble_sort(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	randomize(ary, len);
	bubble_sort(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	/* Selection sort */
	printf("\nSelection sort\n");
	init_int_ary(ary, len);
	selection_sort(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	randomize(ary, len);
	selection_sort(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	/* Insertion sort */
	printf("\nInsertion sort\n");
	init_int_ary(ary, len);
	insertion_sort(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	randomize(ary, len);
	insertion_sort(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	/* Merge sort */
	printf("\nMerge sort\n");
	init_int_ary(ary, len);
	merge_sort(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	randomize(ary, len);
	merge_sort(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	/* Merge sort b */
	printf("\nMerge sort b\n");
	init_int_ary(ary, len);
	merge_sort_b(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	randomize(ary, len);
	merge_sort_b(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	/* Iterative merge sort */
	printf("\nIterative merge sort\n");
	init_int_ary(ary, len);
	iterative_merge_sort(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	randomize(ary, len);
	iterative_merge_sort(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	/* Quick sort */
	printf("\nQuick sort\n");
	init_int_ary(ary, len);
	quick_sort(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	randomize(ary, len);
	quick_sort(ary, len); /* Sort */
	print_ary(ary, len);
	check_ary(ary, len);

	printf("All tests passed!\n");
	return (0);
}

static void	print_ary(int *ary, int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", ary[i]);
	printf("\n");
}

static void init_int_ary(int *ary, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ary[i] = 100 - i;
		i++;
	}
	if (len > 1)
		ary[i - 1] = ary[i - 2];
}

static void	randomize(int *ary, int len)
{
	srand(time(NULL));
	for (int i = 0; i < len; i++)
		ary[i] = rand() % 100;
}

static void	check_ary(int *ary, int len)
{
	for (int i = 0; i < len - 1; i ++)
		assert(ary[i] <= ary[i + 1]);
}