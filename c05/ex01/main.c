#include <stdio.h>

int	ft_recursive_factorial(int in);

void	test(int n, int answer)
{
	char *result = "success";
	if (ft_recursive_factorial(n) != answer)
		result = "FAILURE";
	printf("Factorial of %i should be %i: %i, %s\n", n, answer, ft_recursive_factorial(n), result);
}

int	main(void)
{
	test(0, 0);
	test(1, 1);
	test(2, 2);
	test(3, 6);
	test(4, 24);
	test(5, 120);
	test(6, 720);
	test(-1, 0);
}
