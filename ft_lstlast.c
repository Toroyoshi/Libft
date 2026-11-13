#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*x;

	if (!lst)
		return (NULL);
	x = lst;
	while (x -> next)
	{
		x = x -> next;
	}
	return (x);
}
