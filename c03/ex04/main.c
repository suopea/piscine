#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	haystack[] = "searching for a needle from a haystack";
	char	needle[] = "needle";
	char	not_needle[] = "evaluation slots";

	printf("example output of strstr:\n");
	printf("%s\n", strstr(haystack, needle));
	printf("%s\n", strstr(haystack, not_needle));
	printf("\noutput of ft_strstr: (should be the same)\n");
	printf("%s\n", ft_strstr(haystack, needle));
	printf("%s\n", strstr(haystack, not_needle));
}
