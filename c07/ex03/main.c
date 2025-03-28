/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:12:47 by ssuopea           #+#    #+#             */
/*   Updated: 2025/03/11 15:09:40 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{

	int size = argc - 2;
	if (argc <3)
		size = 0;

	char *sep = argv[1];
	char **strs = argv + 2;
	char *out = ft_strjoin(size, strs, sep);

	printf("\n\nFirst argument is separator, rest is words\n\n");
	printf("%s\n\n", out);
	free(out);
}
