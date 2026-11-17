/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:00:11 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/17 15:42:27 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
