/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:29:58 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/31 21:56:05 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*temp;

	temp = dest;
	while (n--)
	{
		*temp = *src;
		temp++;
		src++;
	}
	while (*temp)
		*temp = 0;
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(){
	char src[] = "Hello";
	char dest[] = "World";
	printf("%s\n", ft_strncpy(dest,src,5));
	//printf("%s\n",strncpy(dest,src,10));
}
*/
