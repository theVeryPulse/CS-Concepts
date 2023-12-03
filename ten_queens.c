/* A back-tracking implementation of ten-queens puzzle solution finder. */

#include <unistd.h>
#include <stdio.h>
#define BOARD_SIZE (10)

static void	find_solutions(int line, char *state, int *sum);

static void	remove_char_from_str(char c, char *s);

static void	get_candidates(int line, char *state, char *candidates);

/* Prints all solutions to the ten-queens puzzle. 
   Returns the sum of solutions. 
   
   The solution is saved as a string, each character represents the colomn of
   the queen, character index representing the line of the queen. */
int	ft_ten_queens_puzzle(void)
{
	char	state[BOARD_SIZE + 1];
	int		line;
	int		sum;

	line = 0;
	state[0] = '\0';
	sum = 0;
	find_solutions(line, state, &sum);
	return (sum);
}

/* Finds solutions recursively.

   Both line and state are part of the "status"; sum keeps track of the sum of
   solutions. */
static void	find_solutions(int line, char *state, int *sum)
{
	char		candidates[BOARD_SIZE + 1];
	short int	i;
	short int	j;

	if (line == BOARD_SIZE)
	{
		printf("result: (%s)\n", state);
		*sum += 1;
		return ;
	}
	get_candidates(line, state, candidates);
	i = 0;
	j = 0;
	while (state[j])
		j++;
	while (candidates[i])
	{
		state[j] = candidates[i];
		state[j + 1] = '\0';
		find_solutions(line + 1, state, sum);
		state[j] = '\0';
		i++;
	}
}

/* Based on the line and state string information, fill (candidates) array with
   candidates positions that do not clash with previous queens.
   
   Loops through all previous lines and takes out queens of same row, column
   and diagnals. */
static void	get_candidates(int line, char *state, char *candidates)
{
	short int	i;
	short int	line_diff;
	short int	prev_line;

	i = 0;
	prev_line = 0;
	while (i < 10)
	{
		candidates[i] = i + '0';
		i++;
	}
	candidates[i] = '\0';
	while (prev_line < BOARD_SIZE && state[prev_line] != '\0')
	{
		remove_char_from_str(state[prev_line], candidates);
		line_diff = line - prev_line;
		if (state[prev_line] - '0' + line_diff < BOARD_SIZE)
		{
			remove_char_from_str((char)(state[prev_line] + line_diff), candidates);
		}
		if (state[prev_line] - '0' - line_diff >= 0)
		{
			remove_char_from_str((char)(state[prev_line] - line_diff), candidates);
		}
		prev_line++;
	}
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
	printf("number of solutions: %d", ft_ten_queens_puzzle());
	return (0);
}
