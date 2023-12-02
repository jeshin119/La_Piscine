/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:11:52 by jeshin            #+#    #+#             */
/*   Updated: 2023/09/01 00:52:59 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_len(char *str)
{	
	unsigned int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

void	set_dest_null(char *dest, unsigned int len_dest, unsigned int substract)
{
	while (len_dest - substract)
	{
		*dest = 0;
		dest++;
		len_dest--;
	}
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_src = get_len(src);
	len_dest = get_len(dest);
	count = size;
	while (*src && --size)
	{
		*dest = *src;
		dest++;
		src++;
	}
	if (*src == 0)
		set_dest_null(dest, len_dest, len_src);
	else if (size == 0)
		set_dest_null(dest, len_dest, count);
	return (len_src);
}
/*
#include <string.h>
#include <stdio.h>
int main(){

	//빈 배열에 Hello 중 앞 3자리만 복사
	char src[] = "Hello";
	char dest[] = "0123456789";
	printf("%s\n->",dest);
	printf("%s , %d\n",dest,ft_strlcpy(dest,src,7));

	char src1[] = "Hello";
	char dest1[] = "0123456789";
	printf("%s , %lu\n",dest1,strlcpy(dest1,src1,7));
}
*/
