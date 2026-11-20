/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:01:22 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/17 14:50:05 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//	Procura a primeira ocorrência de um byte numa zona de memória.
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// #include <assert.h>
// #include <string.h>

// int main(void)
// {
//     char    str[] = "Hello World";
//     char    *result;

//     // Test 1: Find an existing character 
//     result = ft_memchr(str, 'W', sizeof(str));

//     assert(result != NULL);
//     assert(result == &str[6]);
//     assert(*result == 'W');

//     printf("Test 1 passed: character found at position %d: %s\n",
//         (int)(result - str), result);

//     // Test 2: Character not found
//     result = ft_memchr(str, 'Z', sizeof(str));

//     assert(result == NULL);

//     printf("Test 2 passed: character not found\n");

//     printf("\nAll tests passed!\n");
//     return (0);
// }