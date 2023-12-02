/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:02:20 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/30 23:09:59 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != 0)
	{
		if (*str < 'A' || *str > 'z' || (*str > 'Z' && *str < 'a'))
		{	
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char str1[] = "Hello";
	printf("Hello -> %d\n",ft_str_is_alpha(str1));
	
	char str2[] = "1234";
	printf("1234 -> %d\n",ft_str_is_alpha(str2));

	char str4[] = "ASDF?!?!";
	printf("ASDF?!?! -> %d\n",ft_str_is_alpha(str4));
}
*/
