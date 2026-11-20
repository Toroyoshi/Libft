/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:00:05 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/17 15:42:24 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Add node in the beggining of the list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// #include <string.h>
// #include <assert.h>

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*temp;

// 	lst = NULL;
// 	node1 = ft_lstnew("Segundo");
// 	node2 = ft_lstnew("Primeiro");

// 	if (!node1 || !node2)
// 	{
// 		free(node1);
// 		free(node2);
// 		return (1);
// 	}

// 	// Teste 1: adicionar a uma lista vazia
// 	ft_lstadd_front(&lst, node1);

// 	assert(lst == node1);
// 	assert(lst->next == NULL);
// 	printf("Teste 1: PASSOU - Node adicionado a lista vazia.\n");

// 	// Teste 2: adicionar ao início de uma lista existente
// 	ft_lstadd_front(&lst, node2);

// 	assert(lst == node2);
// 	assert(lst->next == node1);
// 	assert(node1->next == NULL);
// 	printf("Teste 2: PASSOU - Node adicionado ao início.\n");

// 	// Verificar a ordem da lista
// 	assert(strcmp((char *)lst->content, "Primeiro") == 0);
// 	assert(strcmp((char *)lst->next->content, "Segundo") == 0);

// 	printf("\nOrdem da lista:\n");
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		temp = lst;
// 		lst = lst->next;
// 		free(temp);
// 	}

// 	printf("\nTodos os testes passaram!\n");
// 	return (0);
// }