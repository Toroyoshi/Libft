/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:00:02 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/17 15:42:21 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//adiciona nó no final da lista
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

// #include <assert.h>
// #include <string.h>

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*temp;

// 	lst = NULL;
// 	node1 = ft_lstnew("1st");
// 	node2 = ft_lstnew("2nd");

// 	if (!node1 || !node2)
// 	{
// 		free(node1);
// 		free(node2);
// 		return (1);
// 	}

// 	// Teste: adicionar a uma lista vazia
// 	ft_lstadd_back(&lst, node1);

// 	assert(lst == node1);
// 	assert(lst->next == NULL);
// 	printf("OK - added 1st node.\n");

// 	// Teste 2: adicionar a uma lista já existente
// 	ft_lstadd_back(&lst, node2);

// 	assert(lst == node1);
// 	assert(lst->next == node2);
// 	assert(node2->next == NULL);
// 	printf("OK - 2nd node added on list\n");

// 	// Verificar a ordem dos elementos
// 	assert(strcmp((char *)lst->content, "1st") == 0);
// 	assert(strcmp((char *)lst->next->content, "2nd") == 0);

// 	printf("\nOrdem da lista:\n");
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		temp = lst;
// 		lst = lst->next;
// 		free(temp);
// 	}

// 	return 0;
// }