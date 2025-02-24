#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	original[] = "mango";
	char	copy[] = "guava"; 

	printf("(using ft_strcpy)\nShould be mango without newline");
	printf(":\n");
	ft_strcpy(copy, original);

	write(1, copy, sizeof(copy));


	char	original2[] = "mango";
	char	copy2[] = "guava"; 

	printf("\n(using strcpy)\nShould be mango without newline");
	printf(":\n");
	strcpy(copy2, original2);

	write(1, copy2, sizeof(copy2));
	return (0);
}

