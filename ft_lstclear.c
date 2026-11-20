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
//Elimina todos os nós da lista e define o início como NULL.
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

// #include <assert.h>

// static void del_content(void *content)
// {
//     (void)content;
// }

// int main(void)
// {
//     t_list *lst;
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;

//     lst = NULL;

//     /* Test 1: Clear an empty list */
//     ft_lstclear(&lst, del_content);
//     assert(lst == NULL);
//     printf("Test 1 passed: empty list\n");

//     /* Test 2: NULL arguments */
//     ft_lstclear(NULL, del_content);
//     ft_lstclear(&lst, NULL);
//     assert(lst == NULL);
//     printf("Test 2 passed: NULL arguments\n");

//     /* Test 3: Clear a list with three nodes */
//     node1 = ft_lstnew("Primeiro");
//     node2 = ft_lstnew("Segundo");
//     node3 = ft_lstnew("Terceiro");

//     /* Check memory allocation */
//     if (!node1 || !node2 || !node3)
//     {
//         free(node1);
//         free(node2);
//         free(node3);
//         return (1);
//     }

//     ft_lstadd_back(&lst, node1);
//     ft_lstadd_back(&lst, node2);
//     ft_lstadd_back(&lst, node3);

//     assert(lst == node1);
//     assert(lst->next == node2);
//     assert(lst->next->next == node3);
//     assert(lst->next->next->next == NULL);

//     printf("Test 3 passed: list created with three nodes\n");

//     /* Clear the entire list */
//     ft_lstclear(&lst, del_content);

//     assert(lst == NULL);
//     printf("Test 4 passed: all nodes cleared\n");

//     /* Test 5: Clear an already cleared list */
//     ft_lstclear(&lst, del_content);
//     assert(lst == NULL);
//     printf("Test 5 passed: clearing an empty list again\n");

//     printf("\nAll tests passed!\n");
//     return (0);
// }