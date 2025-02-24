#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	original[] = "mango";
	char	copy[5]; 
	ft_strcpy(copy, original);
	write(1, copy, sizeof(copy));
}

