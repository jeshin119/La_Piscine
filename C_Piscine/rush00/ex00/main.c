/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsepar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:37:57 by minsepar          #+#    #+#             */
/*   Updated: 2023/08/27 17:39:06 by minsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

extern void	rush(int x, int y);

int	is_valid_str(char *num)
{
	long	int_checker;

	int_checker = 0;
	while (*num != '\0')
	{
		if (*num < '0' || *num > '9')
		{
			write(2, "[Error] not a valid num :\\", 26);
			return (0);
		}
		else
		{
			int_checker *= 10;
			int_checker += *num - '0';
			if (int_checker > 2147483647)
			{
				write(2, "[Error] Integer overflow :(", 27);
				return (0);
			}
		}
		num++;
	}
	return (1);
}

int	atoi(char *str)
{
	int	n;

	n = 0;
	while (*str != 0)
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return (n);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc == 3 && is_valid_str(argv[1]) && is_valid_str(argv[2]))
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		rush(x, y);
	}
	else if (argc != 3)
	{
		write(2, "[Error] number of arguments not equal to 2 :/", 45);
	}
	return (0);
}
