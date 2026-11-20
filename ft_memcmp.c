/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:01:27 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/17 14:50:39 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Compara duas zonas de memória byte a byte.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;
	size_t				i;

	a = s1;
	b = s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

// #include <assert.h>

// int main(void)
// {
//     char    str1[] = "Hello";
//     char    str2[] = "Hello";
//     char    str3[] = "Hallo";
//     int     result;

//     // Test 1: Compare different memory areas
//     result = ft_memcmp(str1, str3, 5);

//     assert(result != 0);
//     assert(result == ('e' - 'a'));

//     printf("Test 1 passed: different memory\n");

//     // Test 2: Compare identical memory areas 
//     result = ft_memcmp(str1, str2, 5);

//     assert(result == 0);

//     printf("Test 2 passed: identical memory\n");

//     printf("\nAll tests passed!\n");
//     return (0);
// }