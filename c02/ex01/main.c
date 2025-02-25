#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
// n can be bigger than src, in which case rest shall be null terminators

	char	original[] = "banana banana terracotta";
	char	copy[23];

	printf("Should be banana: (n longer than src)\n");

//strncpy(copy, original, 6);
	ft_strncpy(copy, original, 6);

	write(1, copy, sizeof(copy));

// n can be shorter than src, in which case output won't be null-terminated

	char	original_2[] = "banana";
	char	copy_2[24] = "banana banana terracotta";

	printf("\n\nShould also be banana: (n shorter than src)\n");
	
//strncpy(copy_2, original_2, 23);
	ft_strncpy(copy_2, original_2, 24);

	write(1, copy_2, sizeof(copy_2));

	return (0);
}
