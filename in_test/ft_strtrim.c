/* 02/11/2023 2:16 */

#include <stdlib.h>
#include <stdbool.h>

static size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static bool	char_in_str(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (true);
		i++;
	}
	return (false);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	org_len;

	i = 0;
	while (s1[i] && char_in_str(s1[i], set))
		i++;
	org_len = ft_str_len(s1);
	org_len -= i;
	i = ft_strlen(s1) - 1;
	while (s1[i] && char_in_str(s1[i], set))
		i--;
}