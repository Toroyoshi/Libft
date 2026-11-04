/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:49:34 by jovitor           #+#    #+#             */
/*   Updated: 2026/10/27 12:59:48 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("if not print return 0: %d", ft_isprint('L'));
}