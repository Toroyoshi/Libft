#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	const unsigned char *s = (const unsigned char *)src;
	unsigned char *d = (unsigned char *)dest;

	i = 0;
	if (dest == src)
		return(dest);
	else if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}
