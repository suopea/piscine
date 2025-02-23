#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char string[] = "test";
	int	out = ft_strlen(&string[0]);
	printf("%i", out);
}
