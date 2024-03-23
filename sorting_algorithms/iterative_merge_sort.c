/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterative_merge_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip <juli@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:17:30 by Philip            #+#    #+#             */
/*   Updated: 2023/12/19 16:59:17 by Philip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef int t_index;

static void	merge(int *ary, int left_i, int mid, int right_i);
static void	cpy_int_ary(int *dst, int *src, int len);

void	iterative_merge_sort(int *ary, int len)
{
	int		merge_size;
	t_index	merge_start_i;
	t_index	left_i;
	t_index	right_i;
	t_index	mid_i;

	merge_size = 2;
	while (merge_size <= len)
	{
		merge_start_i = 0;
		while (merge_start_i + merge_size - 1 < len)
		{
			left_i = merge_start_i;
			right_i = merge_start_i + merge_size - 1;
			mid_i = (left_i + right_i) / 2;
			merge(ary, left_i, mid_i, right_i);
			merge_start_i += merge_size;

			/* Merge the unstandard part with the previous standard one */
			if (merge_start_i + merge_size - 1 >= len) 
				merge(ary, merge_start_i - merge_size, merge_start_i - 1, len - 1);
		}
		merge_size *= 2;
	}
	if (merge_size / 2 < len)
		merge(ary, 0, merge_size / 2 - 1, len - 1); /* Merge the part that is excluded */
}
static void	cpy_int_ary(int *dst, int *src, int len)
{
	t_index	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

static void	merge(int *ary, int left_i, int mid, int right_i)
{
	int		*aux;
	int		len;
	t_index	i;
	t_index	l_i;
	t_index	r_i;

	len = right_i - left_i + 1;
	aux = (int *)malloc(len * sizeof(int));
	if (!aux)
		return ;
	i = 0;
	l_i = left_i;
	r_i = mid + 1;
	while (i < len)
	{
		if (l_i > mid)
			aux[i++] = ary[r_i++];
		else if (r_i > right_i)
			aux[i++] = ary[l_i++];
		else if (ary[l_i] < ary[r_i])
			aux[i++] = ary[l_i++];
		else
			aux[i++] = ary[r_i++];
	}
	cpy_int_ary(&ary[left_i], aux, len);
	free(aux);
}