#include <stdio.h>
#include <limits.h>

int	*ft_range(int min, int max);

void	test(int min, int max)
{
	printf("min: %i\nmax: %i\n", min, max);
	int	*range = ft_range(min, max);
	if (min < max && max - min < 100)
	{
		int i = 0;
		while (i < max - min)
		{
			printf("%i ", range[i]);
			i++;
		}
	}
	if (min < max && max - min >= 100)
	{
		printf("%i, %i, %i, ...  %i, %i, %i. ", 
						range[0], range[1], range[3], 
						range[max - min - 3], 
						range[max - min - 2], 
						range[max - min - 1]);
	}
	if (max < min)
		printf("null???????");
	printf("\n\n");
}

int	main(void)
{
	test(0, 5);
	test(-5, 0);
	test(-3, 3);
	test(0, 1000);
	test(-9, 9);
	test(-1000000, 1000000);
//	test(INT_MIN, INT_MAX);
	test(1, 0);
}
