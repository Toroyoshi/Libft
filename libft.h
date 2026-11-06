#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <stdint.h>
# include <fcntl.h>

size_t	ft_strlen(const char *s);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strchr(const char *s, int c);
void	ft_putchar_fd(char c, int fd);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strrchr(const char *s, int c);

#endif