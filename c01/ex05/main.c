#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	printf("say hello: \n");
	char	string[] = "hello";
	ft_putstr(string);

	printf("\ndraw a spider: \n");
	char 	string2[] = "//\\\(oo)/\\\\";
	ft_putstr(string2);
}

