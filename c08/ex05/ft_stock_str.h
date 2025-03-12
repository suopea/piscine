/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:55:43 by ssuopea           #+#    #+#             */
/*   Updated: 2025/03/12 12:33:48 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H 
# define FT_STOCK_STR_H

int	main(int argc, char **argv);

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}								t_stock_str;

#endif
