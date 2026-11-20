/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:01:15 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/13 18:01:17 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Conta quantos nós existem na lista.
int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}

// #include <assert.h>
// #include <stdio.h>

// static void del_content(void *content)
// {
// 	(void)content;
// }
// int main(void)
// {
//     t_list  *lst;
//     t_list  *node1;
//     t_list  *node2;
//     t_list  *node3;

//     lst = NULL;

//     //Test 1: Count nodes in a list
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

//     assert(ft_lstsize(lst) == 3);

//     printf("Test 1 passed: list contains %d nodes\n",
//         ft_lstsize(lst));

//     //Test 2: Empty list 
//     assert(ft_lstsize(NULL) == 0);

//     printf("Test 2 passed: empty list contains 0 nodes\n");

//     ft_lstclear(&lst, del_content);

//     printf("\nAll tests passed!\n");
//     return (0);
// }
