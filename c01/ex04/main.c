#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int x = 3;
	int y = 2;
	int *a = &x;
	int *b = &y;

	printf("Calculating %d by %d... \n", x, y);
	ft_ultimate_div_mod(a, b);
	printf("Result of division: %d \nremainder: %d \nboth should be 1 \n", x, y);
}
