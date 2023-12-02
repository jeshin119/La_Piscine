/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:37:31 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/28 09:11:24 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_is_last(int len, char	*print_num)
{
	int	now;
	int	next;
	int	count;

	now = 0;
	count = len -1;
	if (print_num[now] == 10 - len + '0')
	{
		if (len == 1)
			return (1);
		while (count--)
		{
			next = now + 1;
			if (print_num[next] - print_num[now] != 1)
				return (0);
			now++;
		}
		return (1);
	}
	return (0);
}

void	print(int len, char *print_num)
{
	int	temp;

	temp = 0;
	while (temp < len)
	{
		write(1, (print_num + temp), 1);
		temp++;
	}
	if (!check_is_last(len, print_num))
		write(1, ", ", 2);
}

void	combi(int start, int pres, int len, char	*print_num)
{
	int	nums[10];
	int	temp;

	temp = 0;
	while (temp < 10)
	{
		nums[temp] = temp;
		temp++;
	}
	if (pres + 1 == len)
	{
		print(len, print_num);
		return ;
	}
	while (start < 10 - len + (pres + 1))
	{
		start++;
		pres++;
		print_num[pres] = nums[start] + '0';
		combi(start, pres, len, print_num);
		pres--;
	}
}

void	ft_print_combn(int n)
{
	char	print_num[10];
	int		temp;

	temp = 0;
	while (temp < 10)
	{
		print_num[temp] = '0';
		temp++;
	}
	combi(-1, -1, n, print_num);
}
