#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*v;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	v = ft_lstlast(*lst);
	v -> next = new;
}
