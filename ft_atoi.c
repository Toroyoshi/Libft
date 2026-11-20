/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:59:13 by jovitor           #+#    #+#             */
/*   Updated: 2026/11/20 19:27:54 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	long			n;
	int				r;
	int				sign;

	i = 0;
	n = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 7 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = (n * 10) + (nptr[i] - '0');
		i++;
	}
	n = (int)(sign * n);
	r = (int)n;
	return (r);
}

// int	main(void)
// {
// 	char	str[] = "-+42";
// 	int		resultado;
// 	resultado = ft_atoi(str);
// 	printf("Resultado: %d\n", resultado);
// 	return (0);
// }