#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "all of these words separated by spaces should be UPPERCASE";


	char	str2[] = "!?123 `\{\n";

	ft_strupcase(str);
	ft_strupcase(str2);
	
	write(1, str, sizeof(str));
	printf("\n\nnext line should be !?123 `\{ \n");
	write(1, str2, sizeof(str2));
	
	return (0);
}
