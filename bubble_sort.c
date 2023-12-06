/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip Li <LJHR.UK@outlook.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:55:51 by Philip Li         #+#    #+#             */
/*   Updated: 2023/12/05 23:55:51 by Philip Li        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* An implementation of bubble sort 
   
   Style: 42 Norm */

#include <stdio.h>

static void	swap(int *a, int *b);

/* Sorts an integer array with bubble sort */
int	*bubble_sort(int ary[], size_t len)
{
	size_t	i;
	size_t	sorted;

	sorted = len - 1;
	while (sorted > 0)
	{
		i = 0;
		while (i < sorted)
		{
			if (ary[i] > ary[i + 1])
				swap(&ary[i], &ary[i + 1]);
			i++;
		}
		sorted--;
	}
	return (ary);
}

/* Swap the integer value at two addresses */
static void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* A more compact version of same bubble sort, with the use of for loop. */
// int	*bubble_sort_clear(int ary[], size_t len)
// {
// 	for (size_t end = len - 1; end > 0; end--)
// 	{
// 		for (unsigned int j = 0; j < end ; j++)
// 		{
// 			if (ary[j] > ary[j+1])
// 			{
// 				swap(&ary[j], &ary[j+1]);
// 			}
// 		}
// 	}
// 	return (ary);
// }

// int main(void)
// {
// 	int ary[11] = {0, 2, 8, 5, 2, 1, 4, 5, 0, 2, 7};
// 	bubble_sort(ary, 11);
// 	printf("length of ary: %zu\n", sizeof(ary) / sizeof(int));
// 	for (size_t i = 0; i < sizeof(ary) / sizeof(int); i++)
// 	{
// 		printf("%d ", ary[i]);
// 	}
// 	printf("\n");
// }