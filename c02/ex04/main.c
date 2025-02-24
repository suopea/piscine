#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("lowercase letters should return 1: %i \n", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz"));
	printf("just uppercase letters should return 0: %i \n", ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("characters before a should return 0: %i \n", ft_str_is_lowercase("XYZ:;"));
	printf("characters after z should return 0: %i \n", ft_str_is_lowercase("after z ~|"));
	printf("empty should return 1: %i \n", ft_str_is_lowercase(""));
	return (0);
}
