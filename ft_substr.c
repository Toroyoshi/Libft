#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *result;
    size_t  i;

    i = 0;
    if (!s)
        return (NULL);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    result = (char *)malloc((len + 1) * sizeof(char));
    if (!result)
        return(NULL);
    else
    {
        while (i < len && s[start + i] != '\0')
        {
            result[i] = s[start + i];
            i++;
        }
        result[i] = '\0';
    }
    return(result);
}

// int main(void)
// {
//     char *result;

//     // TEST 1: Normal substring
//     printf("TEST 1 - Normal substring\n");
//     result = ft_substr("Hello World", 6, 5);
//     printf("Expected: World\n");
//     printf("Result:   %s\n\n", result);
//     free(result);

//     // TEST 2: Start at beginning
//     printf("TEST 2 - Start at beginning\n");
//     result = ft_substr("42Lisboa", 0, 2);
//     printf("Expected: 42\n");
//     printf("Result:   %s\n\n", result);
//     free(result);

//     // TEST 3: Length greater than available characters
//     printf("TEST 3 - Length exceeds string\n");
//     result = ft_substr("Hello", 2, 10);
//     printf("Expected: llo\n");
//     printf("Result:   %s\n\n", result);
//     free(result);

//     // TEST 4: Start at end of string
//     printf("TEST 4 - Start at end\n");
//     result = ft_substr("Hello", 5, 3);
//     printf("Expected: ''\n");
//     printf("Result:   '%s'\n\n", result);
//     free(result);

//     // TEST 5: Zero length
//     printf("TEST 5 - Zero length\n");
//     result = ft_substr("42Lisboa", 2, 0);
//     printf("Expected: ''\n");
//     printf("Result:   '%s'\n\n", result);
//     free(result);

//     // TEST 6: Start beyond string
//     printf("TEST 6 - Start beyond string\n");
//     result = ft_substr("Hello", 10, 3);
//     printf("Expected: ''\n");
//     printf("Result:   '%s'\n\n", result);
//     free(result);

//     // TEST 7: Entire string
//     printf("TEST 7 - Entire string\n");
//     result = ft_substr("Libft", 0, 5);
//     printf("Expected: Libft\n");
//     printf("Result:   %s\n\n", result);
//     free(result);

//     // TEST 8: NULL input
//     printf("TEST 8 - NULL input\n");
//     result = ft_substr(NULL, 0, 5);
//     printf("Expected: NULL\n");
//     printf("Result:   %s\n\n", result ? result : "NULL");
//     free(result);

//     return (0);
// }