#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*x;
	t_list	*m;

	if (!lst || !del)
		return ;
	x = *lst;
	while (x)
	{
		m = x;
		x = x->next;
		del(m->content);
		free(m);
	}
	*lst = NULL;
}
