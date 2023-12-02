/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:25:57 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/31 20:41:06 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char ch)
{
	if (ch < 'a' || ch > 'z')
		return (0);
	return (1);
}

int	is_upcase(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}

int	is_alpha_nums(char ch)
{
	if (is_upcase(ch) || is_lowercase(ch) || (ch >= '0' && ch <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		now;
	int		prev;

	now = 0;
	while (str[now] != 0)
	{
		if (is_upcase(str[now]))
			str[now] += 'a' - 'A';
		if (is_lowercase(str[now]))
		{
			if (now == 0)
			{	
				str[now] -= 'a' - 'A';
				now++;
				continue ;
			}
			prev = now -1;
			if (!is_alpha_nums(str[prev]))
				str[now] -= 'a' - 'A';
		}
		now++;
	}
	return (str);
}
/*
#include<stdio.h>
int main(){
	char p1[] = "saIlt, commTent tu vas ? 42mots quar86ante-deux; cinquante+et+un";
	printf("%s \n" ,p1);
	printf("%s\n\n" ,ft_strcapitalize(p1));
	return 0;
}
*/
