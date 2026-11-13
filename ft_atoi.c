/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 17:17:58 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/23 16:00:20 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	pt_sign(const char nptr)
{
	int	i;

	i = 1;
	if (nptr == '-')
	{
		i = -i;
	}
	else
	{
		i = 1;
	}
	return (i);
}

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
	{
		i++;
	}
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		sign = sign * pt_sign(nptr[i]);
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
// 	char	str[] = "   -+-123";
// 	int		resultado;

// 	resultado = ft_atoi(str);
// 	printf("Resultado: %d\n", resultado);
// 	return (0);
// }