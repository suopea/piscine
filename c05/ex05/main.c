#include <stdio.h>

int	ft_sqrt(int in);

void	test(int n, int answer)
{
	char *result = "success";
	if (ft_sqrt(n) != answer)
		result = "FAILURE";
	printf("Square root of %i should be %i: %i, %s\n", n, answer, ft_sqrt(n), result);
}

int	main(void)
{
	test(0, 0);
	test(1, 1);
	test(2, 0);
	test(3, 0);
	test(4, 2);
	test(5, 0);
	test(6, 0);
	test(9, 3);
	test(42, 0);
}
