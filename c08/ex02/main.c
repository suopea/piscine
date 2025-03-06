#include <stdio.h>
#include "ft_abs.h"

void	test(int n)
{
	printf("in: %i, out: %i\n", n, ABS(n));
}

int	main(void)
{
	test(0);
	test(1);
	test(-1);
}
