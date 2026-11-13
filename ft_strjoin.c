#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	i;
	size_t	j;

	if(!s1 || !s2)
		return (NULL);
	r = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if(!r)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		r[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		r[i + j] = s2[j];
		j++;
	}
	r[i + j] = '\0';
	return(r);
}

// int main(void)
// {
//     char *result;

//     // TEST 1: Normal concatenation
//     printf("TEST 1 - Normal concatenation\n");
//     result = ft_strjoin("Blink", "GPT");
//     if (result)
//     {
//         printf("Expected: BlinkGPT\n");
//         printf("Result:   %s\n", result);
//         free(result);
//     }
//     else
//         printf("Allocation failed\n");

//     // TEST 2: First string empty
//     printf("\nTEST 2 - First string empty\n");
//     result = ft_strjoin("", "Blink");
//     if (result)
//     {
//         printf("Expected: Blink\n");
//         printf("Result:   %s\n", result);
//         free(result);
//     }
//     else
//         printf("Allocation failed\n");

//     // TEST 3: Second string empty
//     printf("\nTEST 3 - Second string empty\n");
//     result = ft_strjoin("Blink", "");
//     if (result)
//     {
//         printf("Expected: Blink\n");
//         printf("Result:   %s\n", result);
//         free(result);
//     }
//     else
//         printf("Allocation failed\n");

//     // TEST 4: Both strings empty
//     printf("\nTEST 4 - Both strings empty\n");
//     result = ft_strjoin("", "");
//     if (result)
//     {
//         printf("Expected: an empty string\n");
//         printf("Result:   '%s'\n", result);
//         free(result);
//     }
//     else
//         printf("Allocation failed\n");

//     // TEST 5: Longer strings
//     printf("\nTEST 5 - Longer strings\n");
//     result = ft_strjoin("42 Lisboa ", "Libft Project");
//     if (result)
//     {
//         printf("Expected: 42 Lisboa Libft Project\n");
//         printf("Result:   %s\n", result);
//         free(result);
//     }
//     else
//         printf("Allocation failed\n");

//     return (0);
// }