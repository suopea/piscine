#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("Letters should return 1: %i \n", ft_str_is_alpha("OnlyAlphabetical"));
	printf("Characters before A should return 0: %i \n", ft_str_is_alpha("!? characters before A"));
	printf("Characters after z should return 0: %i \n", ft_str_is_alpha("after z ~|"));
	printf("Empty should return 1: %i \n", ft_str_is_alpha(""));
	return (0);
}
