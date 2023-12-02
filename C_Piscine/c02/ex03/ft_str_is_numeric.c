/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:41:22 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/30 10:16:50 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != 0)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(){
	char str1[] = "Hello";
	printf("Hello -> %d\n",ft_str_is_numeric(str1));

	char str2[] = "1234567890";
	printf("1234567890 -> %d\n",ft_str_is_numeric(str1));
	
	char str3[] = "-987654321";
	printf("-987654321 -> %d\n",ft_str_is_numeric(str1));
	
	char str4[] = "0";
	printf("0 -> %d\n",ft_str_is_numeric(str1));

	char *str5 = "";
	printf(""" -> %d\n",ft_str_is_numeric(str5));
}
*/
