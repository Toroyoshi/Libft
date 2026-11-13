/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 19:28:31 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/21 16:50:35 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb == -2147483648)
	{
		write (fd, "-2", 2);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putnbr_fd((nb % 10), fd);
	}
	else
	{
		c = nb + '0';
		write(fd, &c, 1);
	}
}

// #include <stdio.h>
// int main (void)
// {
// 	ft_putnbr_fd(-123, 1);

// 	return (0);
// }