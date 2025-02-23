#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char string[] = "how long am I";
	int	out = ft_strlen(string);
	printf("should be 13: %i", out);

}
