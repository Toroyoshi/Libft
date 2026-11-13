#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t  i;
	unsigned char *p;

    i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

// int main(void)
// {
//     char name1[10] = "BlinkGPT";
//     char name2[10] = "BlinkGPT";
//     int numbers[5] = {1, 2, 3, 4, 5};

//     // Teste 1: Limpar a string inteira
//     ft_bzero(name1, sizeof(name1));
//     printf("Teste 1: \"%s\"\n", name1);

//     // Teste 2: Limpar apenas 3 bytes a partir do índice 2
//     ft_bzero(name2 + 2, 3);
//     printf("Teste 2: \"%s\"\n", name2);

//     // Teste 3: Limpar um array de inteiros
//     ft_bzero(numbers, sizeof(numbers));
//     printf("Teste 3: ");
//     for (int i = 0; i < 5; i++)
//         printf("%d ", numbers[i]);
//     printf("\n");

//     // Teste 4: n = 0 (não deve alterar nada)
//     ft_bzero(name2, 0);
//     printf("Teste 4: \"%s\"\n", name2);

//     return (0);
// }