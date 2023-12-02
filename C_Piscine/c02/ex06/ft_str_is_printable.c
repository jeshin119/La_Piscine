/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:38:50 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/30 23:26:42 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != 0)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char* p1 = "1234567890";
	printf("%s -> %d \n",p1,ft_str_is_printable(p1));

	char* p2 = "HELLO";
	printf("%s -> %d \n",p2,ft_str_is_printable(p2));

	char* p3 = "\n";
	printf("%s -> %d \n",p3,ft_str_is_printable(p3));

	char* p4 = "!@#$%^&*()_";
	printf("%s -> %d \n",p4,ft_str_is_printable(p4));

	char* p5 = "";
	printf("%s -> %d \n",p5,ft_str_is_printable(p5));
}
*/
