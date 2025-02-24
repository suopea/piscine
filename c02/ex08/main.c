#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "ALL OF THESE WORDS SEPARATED BY SPACES SHOULD BE lowercase";


	char	str2[] = "!?123 `\{\n";

	ft_strlowcase(str);
	ft_strlowcase(str2);
	
	write(1, str, sizeof(str));
	printf("\n\nnext line should be !?123 `\{ \n");
	write(1, str2, sizeof(str2));
	
	return (0);
}
