#include <stdio.h>
#include <limits.h>

int	ft_find_next_prime(int in);

void	test(int n, int answer)
{
	char *result = "success";
	if (ft_find_next_prime(n) != answer)
		result = "FAILURE";
	printf("Next prime from %i should be %i: %i, %s\n", n, answer, ft_find_next_prime(n), result);
}

int	main(void)
{
	test(INT_MIN, 2);
	test(-1, 2);
	test(0, 2);
	test(1, 2);
	test(2, 2);
	test(3, 3);
	test(4, 5);
	test(5, 5);
	test(6, 7);
	test(9, 11);
	test(42, 43);
	test(99990, 99991);
	test(99991, 99991);
	test(99992, 100003);
	test(INT_MAX, 0);
}
