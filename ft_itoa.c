#include "libft.h"

static int	ft_length(long n)
{
	long	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n == 0)
		n++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nbr;
	char	*str;

	nbr = n;
	len = ft_length(nbr);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (len >= 0 && nbr > 0)
	{
		len--;
		str[len] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (str);
}