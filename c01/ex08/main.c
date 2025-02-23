#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	numbers[] = {128, 256, 16, 64, 32};
	int *point = &numbers[0];
	ft_sort_int_tab(point, 4);
	printf("16 -> 256: \n\n");
	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);
	printf("%d\n", numbers[3]);
	printf("%d\n", numbers[4]);

}
