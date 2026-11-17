/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:03:04 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/17 15:04:38 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc((ft_strlen(s) + 1));
	if (!dest)
	{
		return ("Fail to malloc.");
	}
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	*original;
// 	char	*copia;

// 	original = "Fala meu mano";
// 	copia = ft_strdup(original);

// 	if (copia == NULL)
// 	{
// 		printf("Malloc falhou\n");
// 		return (1);
// 	}
// 	printf("Original: %s\n", original);
// 	printf("Copia:    %s\n", copia);

// 	free(copia);
// 	return (0);
// }