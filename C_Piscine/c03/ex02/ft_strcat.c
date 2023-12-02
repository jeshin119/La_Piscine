/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:34:10 by jeshin            #+#    #+#             */
/*   Updated: 2023/09/01 05:06:18 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*ret;

	ret = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (ret);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char	dest1[30] = "Hello";
	char	*src1 = "World";
	printf("-> : %s\n" , ft_strcat(dest1,src1));
	
	char	dest2[30] = "Hello";
	char	*src2 = "World";
	printf("-> : %s\n" ,strcat(dest2,src2));

	char *dest = malloc(10 * sizeof(char));
	char *src = "asdf";

	strcpy(dest, "bbb");
	printf("%p %s | %s\n", dest, dest, strcat(dest, src));

	strcpy(dest, "bbi");
	printf("%p %s | %s\n", dest, dest, ft_strcat(dest, src));
	
	return (0);
}
*/
