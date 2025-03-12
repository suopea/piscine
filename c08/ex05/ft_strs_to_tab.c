/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:33:37 by ssuopea           #+#    #+#             */
/*   Updated: 2025/03/12 12:30:50 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*deep_copy(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(i + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*out;
	int			i;

	i = 0;
	out = malloc((1 + ac) * sizeof(t_stock_str));
	if (!out)
		return (NULL);
	while (i < ac)
	{
		out[i].size = ft_strlen(av[i]);
		out[i].str = av[i];
		out[i].copy = deep_copy(av[i]);
		i++;
	}
	out[i].str = 0;
	return (out);
}

int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	int			i;

	tab = ft_strs_to_tab(argc - 1, argv + 1);
	i = 0;
	ft_show_tab(tab);
	while (tab[i].str)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
}
