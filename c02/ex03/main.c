#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("numbers should return 1: %i \n", ft_str_is_numeric("0123456789"));
	printf("Characters before 0 should return 0: %i \n", ft_str_is_numeric("+-./"));
	printf("Characters after 9 should return 0: %i \n", ft_str_is_numeric(":;?"));
	printf("Empty should return 1: %i \n", ft_str_is_numeric(""));
	return (0);
}
