#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strrchr(set, s1[len]))
		len--;
	str = ft_substr(s1, i, len - i + 1);
	return (str);
}

// int main()
// {
// 	printf("%s\n", ft_strtrim(" Hel lo! ", " "));
// 	printf("%s\n", ft_strtrim(" Hello! ", " "));
// 	printf("%s\n", ft_strtrim(" Hello!", " "));
// 	printf("%s\n", ft_strtrim("Hello! ", " "));
// 	printf("%s\n", ft_strtrim("Hello!", " "));
// 	printf("%s\n", ft_strtrim("", ""));
// 	printf("%s\n", ft_strtrim(" Hello! ", ""));
// 	printf("%s\n", ft_strtrim("", " "));
// }