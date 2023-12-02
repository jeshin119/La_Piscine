/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:59:08 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/31 18:36:52 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*src && *temp)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(){
	char p1[] = "Hello";
	char p2[] = "Wor";
	printf("dest : %s ->",p2);
	printf("%s\n",ft_strcpy(p2,p1));
	
	char p3[] = "Hello";
	char p4[] = "Wor";
	printf("dest : %s ->",p4);
	printf("%s\n", strcpy(p4,p3));
	
	char p5[] = "HelloHelloHello";
	char p6[] = "World";
	printf("dest : %s ->",p6);
	printf("%s\n",ft_strcpy(p6,p5));

	char p7[] = "HelloHelloHelloHello";
	char p8[] = "World";
	printf("dest : %s ->",p8);
	printf("%s\n", strcpy(p8,p7));

}
*/
