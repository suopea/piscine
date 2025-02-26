#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	original[] = "mango";
	char	copy[] = "pineapple"; 
	char	*output;

	printf("using ft_strcpy\n");
	output = ft_strcpy(copy, original);

	write(1, output, sizeof(output));


	char	original2[] = "mango";
	char	copy2[] = "pineapple"; 
	char	*output2;

	printf("\n\nUsing strcpy, should be same");
	printf(":\n");
	output2 = strcpy(copy2, original2);

	write(1, output2, sizeof(output2));
	return (0);
}

