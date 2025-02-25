#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char orig[20] = "original ";
	char orig2[20] = "original ";
	char to_add[] = "modified";
	char to_add2[] = "modified";

	printf("example output of strcat: \n");
	strcat(orig, to_add);
	printf("%s\n", orig);

	printf("\n\noutput of ft_strcat:  (should be the same)\n");
	ft_strcat(orig2, to_add2);
	printf("%s\n", orig2);
}
