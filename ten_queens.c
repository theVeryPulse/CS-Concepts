#include <unistd.h>
#include <stdio.h>

void	remove_a_from_b(char remove, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != remove)
		i++;
	if (str[i] == '\0')
		return ;
	while (str[i] != '\0')
	{
		str[i] = str[i + 1];
		i++;
	}
}


void	get_candidates(int line, char *state, char *candidates)
{
	int		i;
	int		line_diff;
	int		prev_line;

	//printf("---get_candidates---\n");
	i = 0;
	prev_line = 0;
	while (i < 10)
	{
		candidates[i] = i + '0';
		i++;
	}
	candidates[i] = '\0';
	while (prev_line < 10 && state[prev_line] != '\0')
	{
		remove_a_from_b(state[prev_line], candidates);
		line_diff = line - prev_line;
		//printf("curent line: (%d)\n", line);
		//printf("checking queen on col (%c) of row (%d)\n", state[prev_line], prev_line);
		//printf("line difference: (%d); it forbids ", line_diff);
		if (state[prev_line] - '0' + line_diff < 10)
		{
			//printf("(%c)", (char)(state[prev_line] + line_diff));
			remove_a_from_b((char)(state[prev_line] + line_diff), candidates);
		}
		if (state[prev_line] - '0' - line_diff >= 0)
		{
			//printf("(%c)", (char)(state[prev_line] - line_diff));
			remove_a_from_b((char)(state[prev_line] - line_diff), candidates);
		}
		prev_line++;
	}
	//printf("\ncandidates: (%s)\n", candidates);
}

void	find_solutions(int line, char *state, int *sum)
{
	char	candidates[11];
	int		i;
	int		j;

	//printf("===find_solutions===\n");
	if (line == 10)
	{
		//printf("result: (%s)\n", state);
		write(1, state, 10);
		write(1, "\n", 1);
		*sum += 1;
		return ;
	}

	get_candidates(line, state, candidates);
	i = 0;
	j = 0;
	while (state[j] != '\0')
		j++;
	while (candidates[i] != '\0')
	{
		state[j] = candidates[i];
		state[j + 1] = '\0';
		//printf("state: (%s)\n", state);
		find_solutions(line + 1, state, sum);
		state[j] = '\0';
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	state[11];
	int		line;
	int		*sum;
	int		value;

	line = 0;
	state[0] = '\0';
	value = 0;
	sum = &value;
	find_solutions(line, state, sum);
	return (*sum);
}

int	main(void)
{
	ft_ten_queens_puzzle();
}
