/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort_b copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip <juli@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:55:56 by Philip Li         #+#    #+#             */
/*   Updated: 2023/12/18 16:04:50 by Philip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	cpy_int_ary(int *dst, int *src, int len);
static void	merge(int *ary, int left, int mid, int right);
static void	divide_and_sort(int *ary, int left, int right);

/* A more common version that is taught online, merge according to 3 parameters:
   left index, middle index, right index.

   Sorts an int ary with merge sort. Time complexity of O(n*log(n)).

   Pseudo code:
     sort left half
     sort right half
     merge left and right halves */
void	merge_sort_b(int *ary, int len)
{
	int	mid;

	if (len == 1)
		return ;
	mid = (len - 1) / 2;
	divide_and_sort(ary, 0, len - 1);
	merge(ary, 0, mid, len - 1);
}

static void	cpy_int_ary(int *dst, int *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}
static void	merge(int *ary, int left, int mid, int right)
{
	int	*aux;
	int	i;
	int	l_i;
	int	r_i;
	int	len;

	len = right - left + 1;
	i = 0;
	l_i = left;
	r_i = mid + 1;
	aux = (int *)malloc(len * sizeof(int));
	if (!aux)
		return ;
	while (i < len)
	{
		if (l_i > mid)
			aux[i++] = ary[r_i++];
		else if (r_i > right)
			aux[i++] = ary[l_i++];
		else if (ary[l_i] <= ary[r_i])
			aux[i++] = ary[l_i++];
		else if (ary[r_i] < ary[l_i])
			aux[i++] = ary[r_i++];
	}
	cpy_int_ary(&ary[left], aux, len);
	free(aux);
}

static void	divide_and_sort(int *ary, int left, int right)
{
	int	mid;
	
	if (left >= right || left < 0 || right < 0 || !ary)
		return ;
	mid = (right + left) / 2;
	divide_and_sort(ary, left, mid);
	divide_and_sort(ary, mid + 1, right);
	merge(ary, left, mid, right);
}
