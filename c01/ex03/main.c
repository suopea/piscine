#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 9;
	int b = 2;
	int div_result;
	int mod_result;
	int *div = &div_result;
	int *mod = &mod_result;

	ft_div_mod(a, b, div, mod);
	printf("%d divided by %d = %d (should be 4) \n", a, b, *div);
	printf("%d modulo %d = %d (should be 1) \n", a, b, *mod);
}
