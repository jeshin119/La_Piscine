/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:01:36 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/28 22:39:21 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned long	size_str;
	char			*temp;

	size_str = 0;
	temp = str;
	while (*temp != '\0')
	{
		size_str++;
		temp++;
	}
	write(1, str, size_str);
}
/*int main(){
	char *str = "Hello\n";
	ft_putstr(str);
	str = "Anoter\n";
	ft_putstr(str);
	str = "Other\n";
	ft_putstr(str);
}*/
