/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 18:05:19 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/21 19:21:19 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(fd, str, i);
}

// int	main(void)
// {
// 	char *test = "test";
// 	ft_putstr_fd(test, 1s);
// 	return (0);
// }