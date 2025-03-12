/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:34:31 by ssuopea           #+#    #+#             */
/*   Updated: 2025/03/12 09:56:12 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = ft_strs_to_tab(argc - 1, argv + 1);
	while (tab[i].str)
	{
		printf("str: %s\n", tab[i].str);
		printf("size: %i\n", tab[i].size);
		printf("copy: %s\n\n", tab[i].copy);
		if (tab[i].copy[i])
			tab[i].copy[0] = 'X';
		printf("(after editing copy:)\nstr: %s\n", tab[i].str);
		printf("size: %i\n", tab[i].size);
		printf("copy: %s\n\n\n", tab[i].copy);
		free(tab[i].copy);
		i++;
	}
	free(tab);
}
