#include <stdio.h>
#include <assert.h>

static void	init_int_ary(int *ary, int len);
static void	print_ary(int *ary, int len);

int		*bubble_sort(int *ary, int len);
void	selection_sort(int *ary, int len);
int		*merge_sort(int *ary, int len);
void	merge_sort_b(int *ary, int len);
void	iterative_merge_sort(int *ary, int len);
void	insertion_sort(int *ary, int len);
void	quick_sort(int *ary, int len);

int	main(void)
{
	int	ary[15];
	int	len = sizeof(ary) / sizeof(*ary);

	/* Bubble sort */
	init_int_ary(ary, len);
	bubble_sort(ary, len);
	print_ary(ary, len); printf("Bubble sort\n");
	for (int i = 0; i < len - 1; i ++)
		assert(ary[i] <= ary[i + 1]);

	/* Selection sort */
	init_int_ary(ary, len);
	selection_sort(ary, len);
	print_ary(ary, len); printf("Selection sort\n");
	for (int i = 0; i < len - 1; i ++)
		assert(ary[i] <= ary[i + 1]);

	/* Insertion sort */
	init_int_ary(ary, len);
	insertion_sort(ary, len);	
	print_ary(ary, len); printf("Insertion sort\n");
	for (int i = 0; i < len - 1; i ++)
		assert(ary[i] <= ary[i + 1]);

	/* Merge sort */
	init_int_ary(ary, len);
	merge_sort(ary, len);
	print_ary(ary, len); printf("Merge sort\n");
	for (int i = 0; i < len - 1; i ++)
		assert(ary[i] <= ary[i + 1]);

	/* Merge sort b */
	init_int_ary(ary, len);
	merge_sort_b(ary, len);
	print_ary(ary, len); printf("Merge sort b\n");
	for (int i = 0; i < len - 1; i ++)
		assert(ary[i] <= ary[i + 1]);

	/* Iterative merge sort */
	init_int_ary(ary, len);
	iterative_merge_sort(ary, len);
	print_ary(ary, len); printf("Iterative merge sort b\n");
	for (int i = 0; i < len - 1; i ++)
		assert(ary[i] <= ary[i + 1]);

	/* Quick sort */
	init_int_ary(ary, len);
	quick_sort(ary, len);
	print_ary(ary, len); printf("Quick sort\n");
	for (int i = 0; i < len - 1; i ++)
		assert(ary[i] <= ary[i + 1]);

	printf("All tests passed!\n");
	return (0);
}

static void	print_ary(int *ary, int len)
{
	int	i;

	i = 0;
	while (i < len)
		printf("%d ", ary[i++]);
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