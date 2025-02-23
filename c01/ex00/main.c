#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int number;
	int *nbr = &number;
	ft_ft(nbr);
	printf("Should be 42 \n");
	printf("Result: %d \n", number);
}
