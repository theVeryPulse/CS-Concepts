/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip <juli@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:11:24 by Philip            #+#    #+#             */
/*   Updated: 2023/12/17 17:14:55 by Philip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	find_min_index(int *ary, int len);

static void	swap(int *a, int *b);

void	selection_sort(int *ary, int len)
{
	int	i;

	if (!ary || len <= 0)
		return ;
	i = 0;
	while (i < len - 2)
	{
		swap(ary + i, ary + i + find_min_index(ary + i, len - i));
		i++;
	}
}

static int	find_min_index(int *ary, int len)
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
