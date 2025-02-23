#include <stdio.h>

void	ft_swap(int *a, int*b);

int	main(void)
{
	int n = 1;
	int m = 2;

	int* a = &n;
	int* b = &m;

	printf("original: %d, %d \n", *a, *b);
	ft_swap(a, b);
	printf("swapped: %d, %d \n", *a, *b);
}
