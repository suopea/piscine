#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

void	test(char *str)
{
	printf("input: \"%s\"\n\n", str);
	printf("standard library atoi():  %i\n", atoi(str));
	printf("         your ft_atoi():  %i\n\n\n", ft_atoi(str));
}

int	main(void)
{
	test("   ---+--+1234ab567");
	printf("(apparently standard atoi doesn't do the multiple +/- signs)\n\n\n\n");
	test("2147483647i max int");
	test("-2147483648 min int");
	test("214748364869 overflow");
	test("-2147483648420 underflow");
	test("+-+123+5i should be -123");
	test("+-+123\n34 shoud be -123 (has a newline)");
	test("no numbers should maybe return zero?");
	test("something other than + or - or whitespace before 123 should probably be 0");
	test(" \f\n\r\t\v1337 all specified whitespaces in the beginning");
}

// isspace means   09, 10, 11, 12, 13, 32
// 
