#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "ALL OF THESE WORDS SEPARATED BY SPACES SHOULD BE capitalized\n";
	char	str2[] = "\nsalut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n";

	ft_strcapitalize(str);
	ft_strcapitalize(str2);
	
	write(1, str, sizeof(str));
	write(1, str2, sizeof(str2));
	
	return (0);
}
