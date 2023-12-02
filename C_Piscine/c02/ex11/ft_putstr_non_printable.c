/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:04:23 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/31 22:01:53 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int	ft_char_is_printable(char ch)
{
	if (ch < 32 || ch > 127)
		return (0);
	return (1);
}

void	get_hexa(unsigned char ch)
{
	char	*nums;

	nums = "0123456789abcdef";
	if (ch < 16)
	{
		ft_putchar('0');
		ft_putchar(nums[ch]);
	}
	else
	{
		ft_putchar(nums[ch / 16]);
		ft_putchar(nums[ch % 16]);
	}
	return ;
}

void	ft_putstr_non_printable(unsigned char *str)
{
	while (*str)
	{
		if (!ft_char_is_printable(*str))
		{
			ft_putchar('\\');
			get_hexa(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
/*
#include <stdio.h>
int main(){
	unsigned char t1[] = "Coucou\ntu vas bien ?";
	printf("Coucou\\ntu vas bien ?\n");
	ft_putstr_non_printable(t1);
	printf("\n");

	unsigned char t2[] = {31,30,29,28};
	printf("t2 : %s\n",t2);
	ft_putstr_non_printable(t2);
	printf("\n");
	unsigned char t3[] = {255,97,98,254,99,0};
	printf("t3 : %s\n",t3);
	ft_putstr_non_printable(t3);
	printf("\n");
	unsigned char t4[] = {255,254,253,252,100,0};
	printf("t4 : %s\n",t4);
	ft_putstr_non_printable(t4);
	return 0;
}
*/
