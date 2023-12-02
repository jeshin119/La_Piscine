/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 04:39:51 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/27 16:49:27 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pr_num(int a1, int a2)
{
	char	first[2];
	char	second[2];

	first[0] = a1 / 10 + '0';
	first[1] = a1 % 10 + '0';
	second[0] = a2 / 10 + '0';
	second[1] = a2 % 10 + '0';
	write(1, first, 2);
	write(1, " ", 1);
	write(1, second, 2);
}

void	ft_print_comb2(void)
{
	int	a1;
	int	a2;

	a1 = 0;
	a2 = 1;
	while (1)
	{
		while (a2 <= 99)
		{
			pr_num(a1, a2);
			write(1, ", ", 2);
			a2++;
		}
		a1++;
		a2 = a1 + 1;
		if (a1 == 98 && a2 == 99)
		{
			pr_num(a1, a2);
			break ;
		}
	}
}
