/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:01:38 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/17 15:02:35 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int main(void)
// {
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     char str3[] = "Hello";

//     // TESTE 1: Sem overlap
//     printf("TESTE 1 - Sem overlap\n");
//     ft_memmove(str1, "World", 6);
//     printf("Resultado: %s\n\n", str1);

//     // TESTE 2: Destino começa depois da origem
//     printf("TESTE 2 - Destino à frente\n");
//     ft_memmove(str2 + 1, str2, 4);
//     printf("Resultado: %s\n\n", str2);

//     // TESTE 3: Destino começa antes da origem
//     printf("TESTE 3 - Destino atrás\n");
//     ft_memmove(str3, str3 + 1, 4);
//     printf("Resultado: %s\n\n", str3);

//     return (0);
// }