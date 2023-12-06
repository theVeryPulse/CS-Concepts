/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ten_queens.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip Li <LJHR.UK@outlook.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:56:08 by Philip Li         #+#    #+#             */
/*   Updated: 2023/12/05 23:56:08 by Philip Li        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define BOARD_SIZE (10)

static void	find_solutions(int line, char *queens_pos, int *solution_count);

static void	remove_char_from_str(char c, char *s);

static void	get_candidates(int line, char *queens_pos, char *candidates);

static int	num_val(char c);

/* A back-tracking implementation of ten-queens puzzle solution finder.
   Prints all solutions to the ten-queens puzzle. 
   Returns the sum of solutions. 
   
   The solution is saved as a string, each character represents the colomn of
   the queen, character index representing the line of the queen. */
int	ten_queens_puzzle(void)
{
	char	queens_pos[BOARD_SIZE + 1];
	int		line;
	int		solution_count;

	line = 0;
	queens_pos[0] = '\0';
	solution_count = 0;
	find_solutions(line, queens_pos, &solution_count);
	return (solution_count);
}

/* Finds solutions recursively.

   Both line and state are part of the "status"; sum keeps track of the sum of
   solutions. */
static void	find_solutions(int line, char *queens_pos, int *solution_count)
{
	char		candidates[BOARD_SIZE + 1];
	short int	candidate_index;
	short int	position_index;

	if (line == BOARD_SIZE)
	{
		printf("result: (%s)\n", queens_pos);
		*solution_count += 1;
		return ;
	}
	get_candidates(line, queens_pos, candidates);
	candidate_index = 0;
	position_index = 0;
	while (queens_pos[position_index])
		position_index++;
	while (candidates[candidate_index])
	{
		queens_pos[position_index] = candidates[candidate_index];
		queens_pos[position_index + 1] = '\0';
		find_solutions(line + 1, queens_pos, solution_count);
		queens_pos[position_index] = '\0';
		candidate_index++;
	}
}

/* Based on the line and state string information, fill (candidates) array with
   candidates positions that do not clash with previous queens.
   
   Loops through all previous lines and takes out queens of same row, column
   and diagnals. */
static void	get_candidates(int line, char *queens_pos, char *candidates)
{
	short int	i;
	short int	line_diff;
	short int	prev_line;

	i = 0;
	prev_line = 0;
	while (i < BOARD_SIZE)
	{
		candidates[i] = i + '0';
		i++;
	}
	candidates[i] = '\0';
	while (prev_line < BOARD_SIZE && queens_pos[prev_line] != '\0')
	{
		remove_char_from_str(queens_pos[prev_line], candidates);
		line_diff = line - prev_line;
		if (num_val(queens_pos[prev_line]) + line_diff < BOARD_SIZE)
		{
			remove_char_from_str((char)(queens_pos[prev_line] + line_diff),
				candidates);
		}
		if (num_val(queens_pos[prev_line]) - line_diff >= 0)
		{
			remove_char_from_str((char)(queens_pos[prev_line] - line_diff),
				candidates);
		}
		prev_line++;
	}
}

/* Returns the int value that a char digit represents.
   For example, (char)'8' returns (int)8 */
static int	num_val(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
}

/* Removes a character from a string. Moves all following characters one byte
   forward to fill up the empty space left by removed character. */
static void	remove_char_from_str(char c, char *s)
{
	short int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!s[i])
		return ;
	while (s[i])
	{
		s[i] = s[i + 1];
		i++;
	}
}

int	main(void)
{
	printf("number of solutions: %d", ten_queens_puzzle());
	return (0);
}
