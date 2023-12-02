/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:14:09 by jeshin            #+#    #+#             */
/*   Updated: 2023/09/03 17:30:50 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	get_strlen(char *str)
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	idx;

	idx = 0;
	len_dest = get_strlen(dest);
	len_src = get_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	size--;
	while (*(src + idx) && len_dest + idx < size)
	{
		*(dest + len_dest + idx) = *(src + idx);
		idx++;
	}
	if (!size)
		*(dest + len_dest + idx) = 0;
	return (len_dest + len_src);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	dest1[6]="12345";
	char src1[] ="456789";

	unsigned int ret1 = ft_strlcat(dest1,src1,5);
	printf("dest = %s\nreturn %u\n",dest1,ret1);

	char dest2[6]="12345";
	char src2[] ="456789";
	size_t ret2 = strlcat(dest2,src2,5);
	printf("dest = %s\nreturn %zu\n",dest2,ret2);
}
*/
