#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	ft_strlcpy(char *dest, char *src, unsigned int n);

void	test(int size)
{
	char string[] = "banana terracotta";
	char buffer[25];
	int out_size;

	out_size = ft_strlcpy(buffer, string, size);


	printf("test(%i): \n%s\n123456789012345678901234567890\nsize: %i\n\n", size, buffer, out_size);
}

int	main(void)
{
	test(0);
	test(2);
	test(4);
	test(15);
	test(30);
	test(6);
}
