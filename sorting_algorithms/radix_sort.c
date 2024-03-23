/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip <juli@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:47:29 by Philip            #+#    #+#             */
/*   Updated: 2023/12/20 19:06:01 by Philip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define BASE_TEN_MAX (9)
#define BASE_TEN (10)

static int	find_max(int *ary, int len);
static void	init_count(int *count, int max);
static void	calculate_count_of_place(int *count, int *ary, int len, int place);
static void	cummulative_count(int *count, int max);
static void	get_output_ary_based_on_place(int *output, int *count, int *ary, int len, int place);
static void	copy_int_ary(int *dst, int *src, int len);
static void	counting_sort_place(int *ary, int len, int place);
static int	get_digit_count(int n);

void	radix_sort(int *ary, int len)
{
	int	max;
	int	digit_count;
	int	i;

	if (!ary || len <= 1)
		return ;
	max = find_max(ary, len);
	digit_count = get_digit_count(max);
	i = 0;
	while (i < digit_count)
	{
		counting_sort_place(ary, len, i);
		i++;
	}
}
/* Note: only sort positive numbers. */
static void	counting_sort_place(int *ary, int len, int place)
{
	int	*count;
	int	*output;

	if (!ary || len <= 1)
		return ;
	count = (int *)malloc((BASE_TEN_MAX +  1) * sizeof(int));
	if (!count)
		return ;
	output = (int *)malloc(len * sizeof(int));
	if (!output)
	{
		free(count);
		return ;
	}
	init_count(count, BASE_TEN_MAX); /* No changes needed */
	calculate_count_of_place(count, ary, len, place); /* Revised */
	cummulative_count(count, BASE_TEN_MAX); /* No changes needed */
	get_output_ary_based_on_place(output, count, ary, len, place); /* Revised */
	copy_int_ary(ary, output, len);
	free(count);
	free(output);
}

/* Initialize the count array with zeros. */
static void	init_count(int *count, int max)
{
	int	c_i;

	if (!count || max <= 0)
		return ;
	c_i = 0;
	while (c_i <= max)
		count[c_i++] = 0;
}

/* Find the digit of (plcae). 0 is unit place, 1 is ten's place, 2 is hundred's
   place, etc. */
static int	digit_of_place(int n, int place)
{
	while (place > 0)
	{
		n /= BASE_TEN;
		place--;
	}
	return (n % BASE_TEN);
}

/* Parameters:
   - place: 0 means rightmost digit, 1 means second to rightmost digit. */
static void	calculate_count_of_place(int *count, int *ary, int len, int place)
{
	int	a_i;

	if (!count || !ary || len <= 0)
		return ;
	a_i = 0;
	while (a_i < len)
	{
		count[digit_of_place(ary[a_i], place)]++;
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

static void	get_output_ary_based_on_place(int *output, int *count, int *ary, int len, int place)
{
	int	a_i;

	if (!output || !count || !ary || len <= 1)
		return ;
	a_i = len - 1;
	while (a_i >= 0)
	{
		output[count[digit_of_place(ary[a_i], place)] - 1] = ary[a_i];
		count[digit_of_place(ary[a_i], place)]--;
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

static int	get_digit_count(int n)
{
	int	digit_count;

	digit_count = 0;
	while (n > 0)
	{
		n /= 10;
		digit_count++;
	}
	return (digit_count);
}
