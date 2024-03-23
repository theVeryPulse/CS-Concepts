/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip <juli@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:34:47 by Philip            #+#    #+#             */
/*   Updated: 2023/12/17 18:09:21 by Philip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	move_to_correct_place(int *ary, int insert_i);

void	insertion_sort(int *ary, int len)
{
	int	i;

	i = 1;
	while (i < len)
	{
		if (ary[i] < ary[i - 1])
			move_to_correct_place(ary, i);
		i++;
	}
}

static void	move_to_correct_place(int *ary, int insert_i)
{
	int	value_to_move;

	value_to_move = ary[insert_i];
	while (insert_i > 0)
	{
		ary[insert_i] = ary[insert_i - 1];
		insert_i--;
		if (value_to_move > ary[insert_i - 1])
		{
			ary[insert_i] = value_to_move;
			break ;
		}
	}
}
