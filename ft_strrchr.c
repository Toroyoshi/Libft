/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:04:03 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/17 14:37:21 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*l;

	i = 0;
	l = NULL;
	while (s[i])
	{
		if ((unsigned char) s[i] == (unsigned char)c)
			l = ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)s[i] == '\0' && (unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (l);
}
