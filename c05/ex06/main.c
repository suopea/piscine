#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int in);

void	test(int n, int answer)
{
	char *result = "success";
	if (ft_is_prime(n) != answer)
		result = "FAILURE";
	printf("Prime test for %i should be %i: %i, %s\n", n, answer, ft_is_prime(n), result);
}

int	main(void)
{
	test(INT_MIN, 0);
	test(-1, 0);
	test(0, 0);
	test(1, 0);
	test(2, 1);
	test(3, 1);
	test(4, 0);
	test(5, 1);
	test(6, 0);
	test(9, 0);
	test(42, 0);
	test(99991, 1);
	test(INT_MAX, 0);
}
