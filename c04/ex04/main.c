#include <stdio.h>
#include <limits.h>

void	ft_putnbr_base(int nbr, char *base);

void	test(int n, char *base, char *expected)
{
	printf("\n%i in system %s should be %s, result: ", n, base, expected);
	fflush(stdout);
	ft_putnbr_base(n, base);
}

int	main(void)
{
	test(0, "012", "0");
	test(1, "012", "1");
	test(2, "012", "2");
	test(3, "012", "10");
	test(4, "012", "11");
	test(5, "012", "12");
	test(6, "012", "20");
	test(7, "012", "21");
	test(8, "012", "22");
	test(9, "012", "100");
	test(27, "012", "1000");
	test(42, "01", "101010");
	test(-42, "01", "101010");
	test(47806, "0123456789ABCDEF", "BABE");
	test(INT_MAX, "0123456789ABCDEF", "7FFFFFFF");
	test(INT_MIN, "0123456789ABCDEF", "-80000000");
}
