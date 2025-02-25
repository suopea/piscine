#include <stdio.h>

int	ft_strlen(char *str);

void test(char *string)
{
	printf("%i %s\n", ft_strlen(string), string);
}

int	main(void)
{

	test("number");
	test("of");
	test("characters");
}
