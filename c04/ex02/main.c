#include <stdio.h>
#include <limits.h>

void	ft_putnbr(int nb);

void	test(int i)
{
	printf("\n%i  in\n", i);
	ft_putnbr(i);
	printf("  out\n");
}

int	main(void)
{
	printf("input should exactly match output\n\n");
	test(INT_MAX);
	test(INT_MIN);
	test(-12345);
	test(12345);
	test(0);
	test(42);
}
