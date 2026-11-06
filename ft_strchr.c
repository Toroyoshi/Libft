#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] && s[i] != (char)c)
    {
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return NULL;
}

// int main(void)
// {
//     const char *str = "banana";
//     char *result;

//     printf("Teste 1 - Primeira ocorrencia de 'a'\n");
//     result = ft_strchr(str, 'a');
//     printf("Resultado: %s\n\n", result);

//     printf("Teste 2 - Primeira ocorrencia de 'n'\n");
//     result = ft_strchr(str, 'n');
//     printf("Resultado: %s\n\n", result);

//     printf("Teste 3 - Caracter inexistente 'z'\n");
//     result = ft_strchr(str, 'z');
//     if (result)
//         printf("Resultado: %s\n\n", result);
//     else
//         printf("Resultado: NULL\n\n");

//     printf("Teste 4 - Procurar o terminador '\\0'\n");
//     result = ft_strchr(str, '\0');
//     if (result)
//         printf("Resultado: Encontrou o terminador!\n\n");
//     else
//         printf("Resultado: NULL\n\n");

//     printf("Teste 5 - Procurar o primeiro caracter 'b'\n");
//     result = ft_strchr(str, 'b');
//     printf("Resultado: %s\n\n", result);

//     printf("Teste 6 - String vazia\n");
//     result = ft_strchr("", 'a');
//     if (result)
//         printf("Resultado: %s\n\n", result);
//     else
//         printf("Resultado: NULL\n\n");

//     return (0);
// }