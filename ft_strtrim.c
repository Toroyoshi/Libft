/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:04:07 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/20 19:22:36 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strrchr(set, s1[len - 1]))
		len--;
	str = ft_substr(s1, i, len - i);
	return (str);
}

// int main()
// {
// 	printf("%s\n", ft_strtrim("abcdba", "acb"));
// 	printf("%s\n", ft_strtrim("   xxxtripouille   xxx", " x"));
// 	printf("%s\n", ft_strtrim("ababa", "a"));
// 	printf("%s\n", ft_strtrim(" Hello! ", " "));
// 	printf("%s\n", ft_strtrim(" Hello!", " "));
// 	printf("%s\n", ft_strtrim("Hello! ", " "));
// 	printf("%s\n", ft_strtrim("Hello!", " "));
// 	printf("%s\n", ft_strtrim("", ""));
// 	printf("%s\n", ft_strtrim(" Hello! ", ""));
// 	printf("%s\n", ft_strtrim("", " "));
// }