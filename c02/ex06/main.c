#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
//generate all printable characters

	char	printables[95];
	char	less_than_printable[95];
	char	more_than_printable[95];

	int	i;
	for (i=0; i<95; i++)
		printables[i] = ' ' + i;

	for (i=0; i<95; i++)
		less_than_printable[i] = printables[i] - 30;

	for (i=0; i<95; i++)
		more_than_printable[i] = printables[i] + 90;

	write(1, printables, sizeof(printables));
	printf("\n\nfrom space to ~ should return 1: %i \n", ft_str_is_printable(printables));
	printf("below 32 should be 0: %i \n", ft_str_is_printable(less_than_printable));
	printf("above 126 should be 0: %i \n", ft_str_is_printable(more_than_printable));
	printf("empty should return 1: %i \n", ft_str_is_printable(""));
	return (0);
}
