/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:00:20 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/13 18:00:21 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Percorre a lista aplicando uma função ao conteúdo de cada nó.
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <assert.h>
// #include <string.h>
// static void    make_upper(void *content)
// {
//     char *str;

//     str = (char *)content;
//     str[0] = ft_toupper(str[0]);
// }

// static void    del_content(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list  *lst;
//     t_list  *node1;
//     t_list  *node2;
//     char    *str1;
//     char    *str2;

//     lst = NULL;

//     //Test 1: Apply ft_toupper to every node
//     str1 = malloc(10);
//     str2 = malloc(10);
//     if (!str1 || !str2)
//     {
//         free(str1);
//         free(str2);
//         return (1);
//     }
//     strcpy(str1, "primeiro");
//     strcpy(str2, "segundo");

//     node1 = ft_lstnew(str1);
//     node2 = ft_lstnew(str2);
//     if (!node1 || !node2)
//     {
//         free(str1);
//         free(str2);
//         free(node1);
//         free(node2);
//         return (1);
//     }

//     ft_lstadd_back(&lst, node1);
//     ft_lstadd_back(&lst, node2);

//     ft_lstiter(lst, make_upper);

//     assert(strcmp(node1->content, "Primeiro") == 0);
//     assert(strcmp(node2->content, "Segundo") == 0);
//     printf("Test 1 passed: callback applied to every node\n");

//     //Test 2: NULL arguments
//     ft_lstiter(NULL, make_upper);
//     ft_lstiter(lst, NULL);
//     assert(strcmp(node1->content, "Primeiro") == 0);
//     assert(strcmp(node2->content, "Segundo") == 0);
//     printf("Test 2 passed: NULL arguments\n");

//     ft_lstclear(&lst, del_content);

//     printf("\nAll tests passed!\n");
//     return (0);
// }