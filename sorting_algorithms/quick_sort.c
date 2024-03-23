/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip <juli@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:14:24 by Philip            #+#    #+#             */
/*   Updated: 2023/12/18 10:28:39 by Philip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	place_pivot(int *ary, int leftmost_i, int rightmost_i);
static void	swap(int *a, int *b);

void	quick_sort(int *ary, int len)
{
	int	leftmost_i;
	int	rightmost_i;

	leftmost_i = 0;
	rightmost_i = len - 1;
	place_pivot(ary, leftmost_i, rightmost_i);
}

/* Recursively places the pivot at its right position. */
static void	place_pivot(int *ary, int leftmost_i, int rightmost_i)
{
	int	pivot_i;
	int	check_i;
	int	dest_i;

	if (leftmost_i >= rightmost_i || !ary)
		return ;
	pivot_i = rightmost_i;
	check_i = leftmost_i;
	dest_i = check_i - 1;
	while (check_i < pivot_i)
	{
		if (ary[check_i] < ary[pivot_i])
			swap(&ary[++dest_i], &ary[check_i]);
		check_i++;
	}
	swap(&ary[++dest_i], &ary[pivot_i]);
	place_pivot(ary, leftmost_i, dest_i - 1);
	place_pivot(ary, dest_i + 1, rightmost_i);
}

static void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
