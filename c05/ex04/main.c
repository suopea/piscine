#include <stdio.h>

int	ft_fibonacci(int index);

void	test(int index, int answer)
{
	char	*result = "success";
	if (ft_fibonacci(index) != answer)
		result = "FAILURE";
	printf("Index %i should result in %i: %i, %s \n", index, answer, ft_fibonacci(index), result);
}

int	main(void)
{
	test(-2, -1);
	test(0, 0);
	test(1, 1);
	test(2, 1);
	test(3, 2);
	test(4, 3);
	test(5, 5);
	test(6, 8);
	test(7, 13);
}

