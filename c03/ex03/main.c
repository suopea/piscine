#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char orig[20] = "original ";
	char orig2[20] = "original ";
	char to_add[] = "modified";
	char to_add2[] = "modified";

	printf("example output of strncat: \n");
	strncat(orig, to_add, 4);
	printf("%s\n", orig);

	printf("\n\noutput of ft_strncat:  (should be the same)\n");
	strncat(orig2, to_add2, 4);
	printf("%s\n", orig2);
}
