/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counting_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip <juli@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:17:06 by Philip            #+#    #+#             */
/*   Updated: 2023/12/20 15:49:10 by Philip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	find_max(int *ary, int len);
static void	init_count(int *count, int max);
static void	calculate_count(int *count, int *ary, int len);
static void	cummulative_count(int *count, int max);
static void	get_output_ary(int *output, int *count, int *ary, int len);
static void	copy_int_ary(int *dst, int *src, int len);

/* Note: only sort positive numbers. */
void	counting_sort(int *ary, int len)
{
	int	max;
	int	*count;
	int	*output;

	if (!ary || len <= 1)
		return ;
	max = find_max(ary, len);
	count = (int *)malloc((max +  1) * sizeof(int));
	if (!count)
		return ;
	output = (int *)malloc(len * sizeof(int));
	if (!output)
	{
		free(count);
		return ;
	}
	init_count(count, max);
	calculate_count(count, ary, len);
	cummulative_count(count, max);
	get_output_ary(output, count, ary, len);
	copy_int_ary(ary, output, len);
	free(count);
	free(output);
}

static int	find_max(int *ary, int len)
{
	int	i;
	int	max;

	if (!ary || len <= 0)
		return (0);
	max = ary[0];
	i = 1;
	while (i < len)
	{
		if (ary[i] > max)
			max = ary[i];
		i++;
	}
	return (max);
}

static void	init_count(int *count, int max)
{
	int	c_i;

	if (!count || max <= 0)
		return ;
	c_i = 0;
	while (c_i <= max)
		count[c_i++] = 0;
}

static void	calculate_count(int *count, int *ary, int len)
{
	int	a_i;

	if (!count || !ary || len <= 0)
		return ;
	a_i = 0;
	while (a_i < len)
	{
		count[ary[a_i]]++;
		a_i++;
	}
}

static void	cummulative_count(int *count, int max)
{
	int	c_i;

	if (!count)
		return ;
	c_i = 1;
	while (c_i <= max)
	{
		count[c_i] += count[c_i - 1];
		c_i++;
	}
}

static void	get_output_ary(int *output, int *count, int *ary, int len)
{
	int	a_i;

	if (!output || !count || !ary || len <= 1)
		return ;
	a_i = len - 1;
	while (a_i >= 0)
	{
		output[count[ary[a_i]] - 1] = ary[a_i];
		count[ary[a_i]]--;
		a_i--;
	}
}

static void	copy_int_ary(int *dst, int *src, int len)
{
	int i;

	if (!dst || !src || len <= 0)
		return ;
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}