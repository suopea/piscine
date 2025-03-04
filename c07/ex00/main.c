#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

void	test(char *original)
{
	printf("using  standard   to copy  \"%s\": \"%s\" \n", original, strdup(original));
	printf("using  ft_strdup  to copy  \"%s\": \"%s\" \n\n", original, strdup(original));
}

int	main(void)
{
	test("asd");
	test("");
}

// test non null terminated?
// how to test for insufficient space available?
