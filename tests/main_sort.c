#include <stdio.h>

static void init_int_ary(int *ary, int len);
static void	print_ary(int *ary, int len);

int		*bubble_sort(int ary[], size_t len);
void	selection_sort(int *ary, int len);
int		*merge_sort(int *ary, int len);
void	insertion_sort(int *ary, int len);



int	main(void)
{
	int	ary[15];
	int	len = 15;

	/* Bubble sort */
	init_int_ary(ary, len);
	bubble_sort(ary, len);
	print_ary(ary, len); printf("Bubble sort\n");

	/* Merge sort */
	init_int_ary(ary, len);
	merge_sort(ary, len);
	print_ary(ary, len); printf("Merge sort\n");

	/* Selection sort */
	init_int_ary(ary, len);
	selection_sort(ary, len);
	print_ary(ary, len); printf("Selection sort\n");

	/* Insertion sort */
	init_int_ary(ary, len);
	insertion_sort(ary, len);	
	print_ary(ary, len); printf("Insertion sort\n");


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
}