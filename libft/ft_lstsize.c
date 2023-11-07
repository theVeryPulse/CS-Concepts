/*	Parameters		lst: The beginning of the list.
	Return value	The length of the list
	Description		Counts the number of nodes in a list.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	if (!lst)
		return (0);
	len = 0;
	while (lst->next)
	{
		len++;
		lst = lst->next;
	}
	return (len + 1);
}