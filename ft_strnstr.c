#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    size_t t;

    i = 0;
    if (little[i] == '\0')
        return ((char *)big);
    while (i < len && big[i])
    {
        j = 0;
        t = i;
        while (little[j] && t < len && big[t] == little[j] )
        {
            t++;
            j++;
        }
        if (little[j] == '\0')
            return((char *)&big[i]);
        else
            i++;
    }
    return (NULL);
}

int main(void)
{
    const char *big = "banana";
    char *result;

    // 1. Substring encontrada
    result = ft_strnstr(big, "ana", 6);
    printf("Teste 1 - Encontrar ana: %s\n",
        result ? result : "NULL");

    // 2. Substring ultrapassa o limite
    result = ft_strnstr(big, "ana", 4);
    printf("Teste 2 - Limite insuficiente: %s\n",
        result ? result : "NULL");

    // 3. Substring inexistente
    result = ft_strnstr(big, "xyz", 6);
    printf("Teste 3 - Não encontrar xyz: %s\n",
        result ? result : "NULL");

    // 4. Little vazia e len = 0
    result = ft_strnstr(big, "", 0);
    printf("Teste 4 - Little vazia: %s\n",
        result ? result : "NULL");

    // 5. Substring encontrada exatamente no limite
    result = ft_strnstr(big, "na", 4);
    printf("Teste 5 - Encontrar na: %s\n",
        result ? result : "NULL");

    // 6. Len = 0 com little não vazia
    result = ft_strnstr(big, "a", 0);
    printf("Teste 6 - Len zero: %s\n",
        result ? result : "NULL");

    // 7. Big vazia
    result = ft_strnstr("", "a", 5);
    printf("Teste 7 - Big vazia: %s\n",
        result ? result : "NULL");

    return (0);
}