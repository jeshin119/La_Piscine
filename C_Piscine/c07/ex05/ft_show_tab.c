/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 22:35:30 by jeshin            #+#    #+#             */
/*   Updated: 2023/09/09 13:53:09 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int					get_len(char *str);
char				*ft_strdup(char *str);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	put_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	put_ch(char ch)
{
	write(1, &ch, 1);
}

void	put_nbr(int nbr)
{
	if (nbr < 10)
	{
		put_ch(nbr + '0');
		return ;
	}
	else
	{
		put_nbr(nbr / 10);
		put_ch(nbr % 10 + '0');
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		put_str(par -> str);
		put_nbr(par -> size);
		put_ch('\n');
		put_str(par -> copy);
		par++;
	}
}
