/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:23:11 by jeshin            #+#    #+#             */
/*   Updated: 2023/09/01 05:16:21 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n-- && (*s1 || *s2))
	{
		if (*s1 != *s2)
		{
			if (*s1 > *s2)
				return (1);
			else
				return (-1);
		}
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(){
	char	*s1 = "HelloHelloHello";
	char	*s2 = "Hello";
	printf("%s ,%s  : %d\n",s1,s2,ft_strncmp(s1,s2,3));
	printf("%s ,%s  : %d\n",s1,s2,strncmp(s1,s2,3));
	printf("\n");
	return (0);
}
*/
