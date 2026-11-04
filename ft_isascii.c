/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:37:16 by jovitor           #+#    #+#             */
/*   Updated: 2026/10/27 12:48:34 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii (int c)
{
	if (c < 0 || c > 127)
		return (0);
	
	return (1);
}

#include <stdio.h>

int main(void)
{
    printf("is_ascii('A'): %d\n", ft_isascii('A'));
    printf("is_ascii('z'): %d\n", ft_isascii('z'));
    printf("is_ascii('5'): %d\n", ft_isascii('5'));
    printf("is_ascii(-1): %d\n", ft_isascii(-1));
    printf("is_ascii(127): %d\n", ft_isascii(127));
    printf("is_ascii(128): %d\n", ft_isascii(128));
    return (0);
}