#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	j = 0;
	s = 0;

	while (dest[i] && i < size)
		i++;
	s = ft_strlen(src);
	if (size == 0)
		return(s);
	if (i < size)
	{
		while (src[j] && j < (size - i - 1))
		{
			dest[j + i] = src[j];
			j++;
		}
		dest[j + i] = '\0';
	}
	return (i + s);
}

// #include "libft.h"

// int main(void)
// {
//     char dest1[20] = "Blink";
//     char dest2[20] = "Blink";
//     char dest3[20] = "Blink";
//     char dest4[20] = "Blink";
//     char dest5[20] = "Blink";

//     printf("Teste 1 - Espaco suficiente\n");
//     printf("Resultado: %zu\n", ft_strlcat(dest1, "GPT", 20));
//     printf("String: %s\n\n", dest1);

//     printf("Teste 2 - Espaco limitado\n");
//     printf("Resultado: %zu\n", ft_strlcat(dest2, "GPT", 7));
//     printf("String: %s\n\n", dest2);

//     printf("Teste 3 - Sem espaco para acrescentar\n");
//     printf("Resultado: %zu\n", ft_strlcat(dest3, "GPT", 6));
//     printf("String: %s\n\n", dest3);

//     printf("Teste 4 - Size igual a zero\n");
//     printf("Resultado: %zu\n", ft_strlcat(dest4, "GPT", 0));
//     printf("String: %s\n\n", dest4);

//     printf("Teste 5 - Size igual a um\n");
//     printf("Resultado: %zu\n", ft_strlcat(dest5, "GPT", 1));
//     printf("String: %s\n\n", dest5);

//     return (0);
// }