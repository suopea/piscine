#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	numbers[] = {1, 2, 3, 4};
	int *point = numbers;
	ft_rev_int_tab(point, 4);
	printf("should be 4321: \n");
	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);
	printf("%d\n", numbers[3]);
	// printf("%d\n", numbers[4]);

	printf("\n\n should be 54321: \n");

	int	numbers2[] = {1, 2, 3, 4, 5};
	int *point2 = numbers2;
	ft_rev_int_tab(point2, 5);
	printf("%d\n", numbers2[0]);
	printf("%d\n", numbers2[1]);
	printf("%d\n", numbers2[2]);
	printf("%d\n", numbers2[3]);
	printf("%d\n", numbers2[4]);
}
