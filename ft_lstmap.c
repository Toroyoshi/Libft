/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:00:58 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/13 18:00:59 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Cria uma nova lista aplicando uma função ao conteúdo de cada nó da lista original.
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

// #include <assert.h>
// #include <string.h>

// static void *make_upper(void *content)
// {
//     char    *src;
//     char    *dst;
//     int     i;

//     src = (char *)content;
//     dst = malloc(strlen(src) + 1);
//     if (!dst)
//         return (NULL);
//     i = 0;
//     while (src[i])
//     {
//         dst[i] = ft_toupper(src[i]);
//         i++;
//     }
//     dst[i] = '\0';
//     return (dst);
// }

// void print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("%s\n", (char *)lst->content);
//         lst = lst->next;
//     }
// }

// static void del_content(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list  *lst;
//     t_list  *mapped;
//     t_list  *node1;
//     t_list  *node2;

//     lst = NULL;

//     //Test 1: Create a transformed copy
//     node1 = ft_lstnew(strdup("primeiro"));
//     node2 = ft_lstnew(strdup("segundo"));

//     if (!node1 || !node2)
//     {
//         if (node1)
//             free(node1->content);
//         if (node2)
//             free(node2->content);
//         free(node1);
//         free(node2);
//         return (1);
//     }

//     ft_lstadd_back(&lst, node1);
//     ft_lstadd_back(&lst, node2);

//     mapped = ft_lstmap(lst, make_upper, del_content);

//     assert(mapped != NULL);
//     assert(strcmp((char *)mapped->content, "PRIMEIRO") == 0);
//     assert(strcmp((char *)mapped->next->content, "SEGUNDO") == 0);

//     //Original list must remain unchanged
//     assert(strcmp((char *)lst->content, "primeiro") == 0);
//     assert(strcmp((char *)lst->next->content, "segundo") == 0);

//     printf("Test 1 passed: new transformed list created\n");
// 	printf("Original list:\n");
// 	print_list(lst);
// 	printf("\nMapped list:\n");
// 	print_list(mapped);

//     //Test 2: NULL arguments
//     assert(ft_lstmap(NULL, make_upper, del_content) == NULL);
//     assert(ft_lstmap(lst, NULL, del_content) == NULL);
//     assert(ft_lstmap(lst, make_upper, NULL) == NULL);

//     printf("\nTest 2 passed: NULL arguments\n");
// 	printf("Original list:\n");
// 	print_list(lst);
// 	printf("\nMapped list:\n");
// 	print_list(mapped);

//     ft_lstclear(&mapped, del_content);
//     ft_lstclear(&lst, del_content);

//     printf("\nAll tests passed!\n");
//     return (0);
// }