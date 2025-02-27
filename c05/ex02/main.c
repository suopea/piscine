#include <stdio.h>

int	ft_iterative_power(int in, int power);

void	test(int n, int pow, int answer)
{
	char *result = "success";
	if (ft_iterative_power(n, pow) != answer)
		result = "FAILURE";
	printf("%i ^ %i should be %i: %i, %s\n", n, pow, answer, ft_iterative_power(n, pow), result);
}

int	main(void)
{
	test(1, 0, 1);
	test(-1, 2, 1);
	test(1, -1, 0);
	test(2, 4, 16);
	test(12, 2, 144);
}
