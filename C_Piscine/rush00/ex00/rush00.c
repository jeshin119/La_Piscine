/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsepar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:55:02 by minsepar          #+#    #+#             */
/*   Updated: 2023/08/27 16:04:08 by minsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char c);

void	putchar_index(int i, int j, int x, int y)
{
	char	*corners;
	char	*edges;

	corners = "oooo";
	edges = "-|-|";
	if (i == 1 && j == 1)
		ft_putchar(corners[0]);
	else if (i == 1 && j == x)
		ft_putchar(corners[1]);
	else if (i == y && j == 1)
		ft_putchar(corners[3]);
	else if (i == y && j == x)
		ft_putchar(corners[2]);
	else if (i == 1)
		ft_putchar(edges[0]);
	else if (j == x)
		ft_putchar(edges[1]);
	else if (i == y)
		ft_putchar(edges[2]);
	else if (j == 1)
		ft_putchar(edges[3]);
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			putchar_index(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
