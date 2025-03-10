#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

void	test(char *original)
{
	char	*standard_string = strdup(original);

	printf("using  standard   to copy  \"%s\": \"%s\" \n", original, standard_string);

	char	*ft_string = ft_strdup(original);
	printf("using  ft_strdup  to copy  \"%s\": \"%s\" \n\n", original, ft_string);
	free(standard_string);
	free(ft_string);
}

int	main(void)
{
	char	*asd = "asd";
	char	*empty = "";

	test(asd);
	test(empty);
}

// test non null terminated?
// how to test for insufficient space available?
