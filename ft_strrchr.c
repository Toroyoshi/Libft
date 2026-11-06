
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    unsigned int i;
    char *l;

    i = 0;
    l = NULL;
    while(s[i])
    {
        if ((unsigned char) s[i] == (unsigned char)c)
		    l = ((char *)&s[i]);
		i++;
	}
    if ((unsigned char)s[i] == '\0' && (unsigned char)c == '\0')
        return((char *)&s[i]);
    return (l);
}

// int main(void)
// {
//     const char *str = "banana";
//     char *result;

//     result = ft_strrchr(str, 'a');
//     printf("Procurar 'a': %s\n", result ? result : "NULL");

//     result = ft_strrchr(str, 'n');
//     printf("Procurar 'n': %s\n", result ? result : "NULL");

//     result = ft_strrchr(str, 'b');
//     printf("Procurar 'b': %s\n", result ? result : "NULL");

//     result = ft_strrchr(str, 'z');
//     printf("Procurar 'z': %s\n", result ? result : "NULL");

//     result = ft_strrchr(str, '\0');
//     printf("Procurar '\\0': %s\n",
//         result ? (result == str + 6 ? "Encontrou o terminador" : "Posição errada") : "NULL");

//     return (0);
// }