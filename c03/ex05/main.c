#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char orig[20] = "original ";
	char to_add[] = "modified";
	unsigned int result;

	result = ft_strlcat(orig, to_add, 4);
	printf("%s\n%i\n", orig, result);
}
