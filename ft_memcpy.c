
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*t;
	unsigned char	*t1;

	i = 0;
	t = (unsigned char *)src;
	t1 = (unsigned char *)dest;
	while (i < n)
	{
		t1[i] = t[i];
		i++;
	}
	return(dest);
}

// int main(void)
// {
//     char source[] = "BlinkGPT";
//     char destination[20] = "........";
//     int numbers[] = {10, 20, 30, 40, 50};
//     int copied[5] = {0};

//     void *result;

//     // Teste 1: Copiar uma string, incluindo o '\0'
//     ft_memcpy(destination, source, 9);
//     printf("Teste 1: %s\n", destination);

//     // Teste 2: Verificar o valor devolvido
//     result = ft_memcpy(destination, source, 5);
//     printf("Teste 2: %s\n", (char *)result);

//     // Teste 3: Copiar um array de inteiros
//     ft_memcpy(copied, numbers, sizeof(numbers));

//     printf("Teste 3: ");
//     for (int i = 0; i < 5; i++)
//         printf("%d ", copied[i]);
//     printf("\n");

//     // Teste 4: Copiar zero bytes
//     ft_memcpy(destination, source, 0);
//     printf("Teste 4: %s\n", destination);

//     // Teste 5: Comparar com o memcpy original
//     char original[20] = {0};
//     char custom[20] = {0};

//     memcpy(original, source, sizeof(source));
//     ft_memcpy(custom, source, sizeof(source));

//     printf("Teste 5: %s\n", 
//         strcmp(original, custom) == 0 ? "PASSOU" : "FALHOU");

//     return (0);
// }