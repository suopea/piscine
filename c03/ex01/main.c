#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char str1[] = "same same but different";
	char str2[] = "same same but different";
	char str3[] = "zame same but different";
	char str4[] = "same but"; 

	printf("example output of strncmp: \n");

	printf("%i\n", strncmp(str1, str2, 10));
	printf("%i\n", strncmp(str1, str3, 10));
	printf("%i\n", strncmp(str1, str4, 10));

	printf("\n\noutput of ft_strncmp:  (should be the same)\n");

	printf("%i\n", strncmp(str1, str2, 10));
	printf("%i\n", strncmp(str1, str3, 10));
	printf("%i\n", strncmp(str1, str4, 10));
}
