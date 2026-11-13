#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;
	size_t	total_size;

	total_size = 0;
	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (size > 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	else
	{
		total_size = nmemb * size;
		ptr = malloc(total_size);
	}
	if(!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return(ptr);
}

// int main(void)
// {
//     int *numbers;
//     char *text;
//     int i;
//     void *ptr;

//     // TEST 1: Allocate 5 integers
//     printf("TEST 1 - Integer allocation\n");
//     numbers = ft_calloc(5, sizeof(int));
//     if (!numbers)
//         printf("Allocation failed\n");
//     else
//     {
//         for (i = 0; i < 5; i++)
//             printf("numbers[%d] = %d\n", i, numbers[i]);
//         free(numbers);
//     }

//     // TEST 2: Allocate a string
//     printf("\nTEST 2 - String allocation\n");
//     text = ft_calloc(10, sizeof(char));
//     if (!text)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("String: '%s'\n", text);
//         free(text);
//     }

//     // TEST 3: Zero elements
//     printf("\nTEST 3 - Zero elements\n");
//     ptr = ft_calloc(0, sizeof(int));
//     printf("Pointer: %p\n", ptr);
//     free(ptr);

//     // TEST 4: Zero element size
//     printf("\nTEST 4 - Zero element size\n");
//     ptr = ft_calloc(5, 0);
//     printf("Pointer: %p\n", ptr);
//     free(ptr);

//     // TEST 5: Overflow protection
//     printf("\nTEST 5 - Overflow protection\n");
//     ptr = ft_calloc(SIZE_MAX, 2);
//     printf("Pointer: %p (expected NULL)\n", ptr);
//     free(ptr);

//     // TEST 6: Compare with original calloc
//     printf("\nTEST 6 - Compare with libc calloc\n");
//     numbers = ft_calloc(5, sizeof(int));
//     int *original = calloc(5, sizeof(int));

//     if (!numbers || !original)
//         printf("Allocation failed\n");
//     else
//     {
//         for (i = 0; i < 5; i++)
//             printf("Index %d: ft_calloc=%d | calloc=%d\n",
//                 i, numbers[i], original[i]);
//     }

//     free(numbers);
//     free(original);

//     return (0);
// }