#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	numbers[] = {5, 2, 3, 8, 9};
	int *point = &numbers[0];
	ft_sort_int_tab(point, 4);
	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);
	printf("%d\n", numbers[3]);
	printf("%d\n", numbers[4]);

}
