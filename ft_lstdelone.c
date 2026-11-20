/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:00:17 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/17 15:42:30 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Elimina um nó e o seu conteúdo através da função del.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}

// #include <string.h>
// #include <assert.h>

// static void del_content(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *lst;
//     t_list *node1;
//     t_list *node2;
//     char *content;

//     lst = NULL;

//     //Test 1: NULL node
//     ft_lstdelone(NULL, del_content);
//     printf("Test 1 passed: NULL node\n");

//     //Test 2: NULL del function
//     content = malloc(10);
//     assert(content != NULL);
//     strcpy(content, "Testing");

//     node1 = ft_lstnew(content);
//     assert(node1 != NULL);

//     ft_lstdelone(node1, NULL);
//     //Node and content remain allocated because del is NULL.
//     free(node1->content);
//     free(node1);

//     printf("Test 2 passed: NULL del function\n");

//     //Test 3: Delete one node 
//     content = malloc(10);
//     assert(content != NULL);
//     strcpy(content, "1st");

//     node1 = ft_lstnew(content);
//     assert(node1 != NULL);

//     ft_lstdelone(node1, del_content);
//     printf("Test 3 passed: node and content deleted\n");

//     //Test 4: Delete one node without affecting another
//     content = malloc(10);
//     assert(content != NULL);
//     strcpy(content, "1st");

//     node1 = ft_lstnew(content);
//     assert(node1 != NULL);

//     content = malloc(10);
//     assert(content != NULL);
//     strcpy(content, "2nd");

//     node2 = ft_lstnew(content);
//     assert(node2 != NULL);

//     ft_lstadd_back(&lst, node1);
//     ft_lstadd_back(&lst, node2);

//     ft_lstdelone(node1, del_content);

//     //node2 should remain valid
//     assert(strcmp((char *)node2->content, "2nd") == 0);

//     printf("Test 4 passed: other node remains intact\n");

//     // Clean up the remaining node
//     ft_lstdelone(node2, del_content);
//     lst = NULL;

//     printf("\nAll tests passed!\n");
//     return (0);
// }