/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:51:09 by jeshin            #+#    #+#             */
/*   Updated: 2023/09/01 03:32:56 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ret;

	ret = dest;
	while (*dest)
		dest++;
	while (nb-- && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (ret);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char	dest[7] = "Hello";
	char	*src = "World";
	printf("%s\n ",dest);
	printf(" -> %s\n", ft_strncat(dest,src,3));

	char	dest1[7] = "Hello";
	char	*src1 = "World";
	printf(" -> %s\n", strncat(dest1,src1,3));
	return (0);
}
*/
