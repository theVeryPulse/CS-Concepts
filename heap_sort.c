/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip <juli@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:58:17 by Philip            #+#    #+#             */
/*   Updated: 2023/12/21 18:30:07 by Philip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Heapify the entire array;
   For each element from last to second to first;
   - Heapify the array in front of the element;
   - swap first element (max root) with current element; */

static void	swap(int *a, int *b);
static void	heapify(int *ary, int len, int subroot_i);

void	heap_sort(int *ary, int len)
{
	int i;

	i = len / 2 - 1; /* The first possible rightmost subtree. */
	while (i >= 0)
	{
		heapify(ary, len, i);
		i--;
	}
	i = len - 1;
	while (i >= 1)
	{
		swap(&ary[0], &ary[i]); /* Swap largest element to the end */
		heapify(ary, i, 0); /* Heapify the array in front of sorted ending. */
		i--;
	}
}

static void	swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

static void	heapify(int *ary, int len, int subroot_i)
{
	int	l_child_i;
	int	r_child_i;
	int	max_i;
	int	continue_check;

	if (!ary || len <= 1 || subroot_i < 0)
		return ;
	l_child_i = subroot_i * 2 + 1;
	r_child_i = l_child_i + 1;
	max_i = subroot_i;
	if (l_child_i < len && ary[l_child_i] > ary[max_i])
		max_i = l_child_i;
	if (r_child_i < len && ary[r_child_i] > ary[max_i])
		max_i = r_child_i;
	if (subroot_i != max_i)
	{
		swap(&ary[subroot_i], &ary[max_i]);
		continue_check = max_i;
		heapify(ary, len, continue_check);
	}
}
