#include "libft.h"

static unsigned int	ft_countwords(char const *s, char c)
{
	unsigned int	i;
	unsigned int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static unsigned int	ft_wordlen(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	ft_free(char **split, unsigned int count)
{
	while (count > 0)
		free(split[--count]);
	free(split);
}

static int	mini_split(char **split, char const *s, char c,
				unsigned int count)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (j < count)
	{
		while (s[i] == c)
			i++;
		split[j] = ft_substr(s, i, ft_wordlen(s + i, c));
		if (!split[j])
			return (ft_free(split, j), 0);
		i += ft_wordlen(s + i, c);
		j++;
	}
	split[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	count;

	if (!s)
		return (NULL);
	count = ft_countwords(s, c);
	split = malloc((count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	if (!mini_split(split, s, c, count))
		return (NULL);
	return (split);
}