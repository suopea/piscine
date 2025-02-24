#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("all uppercase letters should return 1: %i \n", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("all lowercase letters should return 0: %i \n", ft_str_is_uppercase("abcdefghijklmnopqrstuvwxyz"));
	printf("characters before a should return 0: %i \n", ft_str_is_uppercase("XYZ:;"));
	printf("characters after z should return 0: %i \n", ft_str_is_uppercase("after z ~|"));
	printf("empty should return 1: %i \n", ft_str_is_uppercase(""));
	return (0);
}
