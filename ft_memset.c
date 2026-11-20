/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:01:45 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/17 15:03:16 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Preenche os primeiros n bytes de uma memória com determinado valor.
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(void)
// {
// 	char str[] = "Hello";

// 	printf("original: %s \n", str);
// 	ft_memset(str, 'A', 5);
// 	printf("pós memset: %s \n", str);
// 	return (0);
// }