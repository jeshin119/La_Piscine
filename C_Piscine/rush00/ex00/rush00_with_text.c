/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsepar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:55:02 by minsepar          #+#    #+#             */
/*   Updated: 2023/08/29 10:12:35 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char c);

void	putchar_index(int i, int j, int x, int y)
{
	char	*corners;
	char	*edges;
	//corners는 문자열 block의 꼭짓점
	//edges는 문자열 block의 모서리
	corners = "oooo";
	edges = "-|-|";
	//1행1열일때 , 1행 마지막열일때, 마지막행 첫번째 열일때 마지막행 마지막열일때
	if (i == 1 && j == 1)
		ft_putchar(corners[0]);
	else if (i == 1 && j == x)
		ft_putchar(corners[1]);
	else if (i == y && j == 1)
		ft_putchar(corners[3]);
	else if (i == y && j == x)
		ft_putchar(corners[2]);
	//첫번째 행의 모서리부분일때, 마지막열의 모서리부분일때, 마지막열의 모서리부분일때, 첫번째열의 모서리부분일때
	else if (i == 1)
		ft_putchar(edges[0]);
	else if (j == x)
		ft_putchar(edges[1]);
	else if (i == y)
		ft_putchar(edges[2]);
	else if (j == 1)
		ft_putchar(edges[3]);
	//특정 모서리부분과 꼭짓점부분이 아니라면(가운데부분이면) 공백출력
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	//i는 행 j 는 열
	int		i;
	int		j;
	//행은 1행부터 시작
	i = 1;
	//1행부터 마지막행까지
	while (i <= y)
	{
		//열은 1열부터 시작
		j = 1;
		//1열부터 마지막열까지
		while (j <= x)
		{
			//열과 행의 정보를 받아 (i,j)에 해당하는 문자 출력
			putchar_index(i, j, x, y);
			//열을 하나 증가시킴
			j++;
		}
		// i행의 마지막 열을 출력하고 개행출력
		// 행 ++;
		ft_putchar('\n');
		i++;
	}
}
