/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:28:17 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/30 10:35:27 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != 0)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char* p1 = "Hello";
	printf("%s -> %d \n",p1,ft_str_is_uppercase(p1));

	char* p2 = "HELLO";
	printf("%s -> %d \n",p2,ft_str_is_uppercase(p2));
	
	char* p3 = "!1A3dCetbsr423$!";
	printf("%s -> %d \n",p3,ft_str_is_uppercase(p3));
	
	char* p4 = "asdfzxcvqwerpoirtuylkfhvbmn";
	printf("%s -> %d \n",p4,ft_str_is_uppercase(p4));
	
	char* p5 = "";
	printf("%s -> %d \n",p5,ft_str_is_uppercase(p5));
}
*/
