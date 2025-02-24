#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	original[] = "mango";
	char	copy[] = "guava"; 

	printf("Should be mango");
	printf(":\n");
	ft_strcpy(copy, original);
	write(1, copy, sizeof(copy));
}

