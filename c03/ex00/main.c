#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char str1[] = "same same but different";
	char str2[] = "same same but different";
	char str3[] = "zame same but different";
	char str4[] = "same same but differ";

	printf("example output of strcmp: \n");

	printf("%i\n", strcmp(str1, str2));
	printf("%i\n", strcmp(str1, str3));
	printf("%i\n", strcmp(str1, str4));

	printf("\n\noutput of ft_strcmp:  (should be the same)\n");

	printf("%i\n", ft_strcmp(str1, str2));
	printf("%i\n", ft_strcmp(str1, str3));
	printf("%i\n", ft_strcmp(str1, str4));
}
