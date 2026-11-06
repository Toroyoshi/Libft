#include "libft.h"

// escrever 'c' no file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main()
// {
// 	int	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
// 	ft_putchar_fd('M', fd);
// 	close(fd);
// }