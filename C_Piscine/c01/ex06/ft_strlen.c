/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:50:36 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/28 22:46:40 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
/*#include <stdio.h>
int main(){
	char *str = "ABCDEFG";
	printf("ABCDEFG : %d\n",ft_strlen(str));
	str = "1234567890";
	printf("1234567890 : %d\n",ft_strlen(str));
	str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ : %d\n",ft_strlen(str));
}*/
