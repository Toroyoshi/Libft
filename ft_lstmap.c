
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*lst2;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		lst2 = ft_lstnew(f(lst->content));
		if (!lst2)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, lst2);
		lst = lst->next;
	}
	return (new);
}
