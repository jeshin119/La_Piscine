/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:19:04 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/30 10:27:46 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != 0)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char *p1 = "Hello";
	printf("%s - > %d\n", p1,ft_str_is_lowercase(p1));
	
	char *p2 = "ABCDEFGHIJK1234";
	printf("%s - > %d\n", p2,ft_str_is_lowercase(p2));
	
	char *p3 = "abcdefghijklm";
	printf("%s - > %d\n", p3,ft_str_is_lowercase(p3));
}
*/
