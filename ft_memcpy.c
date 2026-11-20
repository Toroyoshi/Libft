/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:01:33 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/17 14:51:13 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copia n bytes de uma zona de memória para outra, sem suportar sobreposição.
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*t;
	unsigned char	*t1;

	i = 0;
	t = (unsigned char *)src;
	t1 = (unsigned char *)dest;
	while (i < n)
	{
		t1[i] = t[i];
		i++;
	}
	return (dest);
}

// int main (void)
// {
// 	char *org = "Fala meu mano";
// 	char cpy[20] = "AAAAAAA";

// 	ft_memcpy(cpy, org, 3);
// 	printf("original: %s", org);
// 	printf("\ncopiada: %s", cpy);
// 	return (0);
// }