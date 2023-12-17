/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip <juli@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:11:24 by Philip            #+#    #+#             */
/*   Updated: 2023/12/17 16:12:20 by Philip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	min_index(int *ary, int len);

static void	swap(int *a, int *b);

void	selection_sort(int *ary, int len)
{
	int	i;

	if (!ary || len <= 0)
		return ;
	i = 0;
	while (i < len - 2)
	{
		swap(ary + i, ary + i + min_index(ary + i, len - i));
		i++;
	}
}

static int	min_index(int *ary, int len)
{
	int	i;
	int	min_i;

	if (!ary || len <= 0)
		return (0);
	i = 0;
	min_i = i;
	while (i < len)
	{
		if (ary[min_i] > ary[i])
			min_i = i;
		i++;
	}
	return (min_i);
}

static void	swap(int *a, int *b)
{
	int	tmp;

	if (!a || !b || *a == *b)
		return ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/* 
#include <stdio.h>

int	main(void)
{
	int	ary[] = {123, 321, 299, 31, 55, 491, 93, 10000, 3, 4, 6};
	int len = sizeof(ary) / sizeof(*ary);
	selection_sort(ary, len);
	for (int i = 0; i < len; i++)
		printf("%d ", ary[i]);
	return (0);
} */