/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:00:24 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/13 18:00:25 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Devolve o último nó da lista.
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

// #include <assert.h>
// int main(void)
// {
//     t_list  *lst;
//     t_list  *node1;
//     t_list  *node2;
//     t_list  *node3;
//     t_list  *last;

//     lst = NULL;

//     //Test 1: Get the last node of a list
//     node1 = ft_lstnew("Primeiro");
//     node2 = ft_lstnew("Segundo");
//     node3 = ft_lstnew("Terceiro");

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

//     last = ft_lstlast(lst);

//     assert(last == node3);
//     assert(last->content == node3->content);
//     assert(last->next == NULL);

//     printf("Test 1 passed: last node correctly identified\n");

//     //Test 2: Empty list
//     assert(ft_lstlast(NULL) == NULL);

//     printf("Test 2 passed: NULL list\n");

//     ft_lstclear(&lst, NULL);

//     return (0);
// }