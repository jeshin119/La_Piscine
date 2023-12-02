/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 06:34:12 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/28 09:02:33 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_num(int nb)
{
	int			len;
	int			temp;
	long long	num;
	char		num_arr[12];
	char		num_arr_rev[12];

	len = 0;
	temp = 0;
	num = nb;
	if (num < 0)
	{
		num = num * (-1);
	}
	while (num >= 1)
	{
		num_arr[len] = num % 10 + '0';
		len++;
		num /= 10;
	}
	while (temp < len)
	{
		num_arr_rev[temp] = num_arr[len - temp - 1];
		write(1, &num_arr_rev[temp], 1);
		temp++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb > 0)
	{
		get_num(nb);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		write(1, "-", 1);
		get_num(nb);
	}
}
