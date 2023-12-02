/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:08:52 by jeshin            #+#    #+#             */
/*   Updated: 2023/09/01 05:16:55 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
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
	char	*s1 = "Hello";
	char	*s2 = "HelloWorld";
	printf("compare %s with %s : %d\n",s1,s2,ft_strcmp(s1,s2));
	printf("compare %s with %s : %d\n",s1,s2,strcmp(s1,s2));

	char	*s3 = "ASDF";
	char	*s4 = "ASDF";
	printf("compare %s with %s : %d\n",s3,s4,ft_strcmp(s3,s4));
	printf("compare %s with %s : %d\n",s1,s2,strcmp(s3,s4));

	char	*s5 = "Hello";
	char	*s6 = "Helasdfasdf";
	printf("compare %s with %s : %d\n",s5,s6,ft_strcmp(s5,s6));
	printf("compare %s with %s : %d\n",s1,s2,strcmp(s5,s6));

	char	*s7 = "123ASDF456";
	char	*s8 = "123ZXCVQWER";
	printf("compare %s with %s : %d\n",s7,s8,ft_strcmp(s7,s8));
	printf("compare %s with %s : %d\n",s1,s2,strcmp(s7,s8));

	return (0);
}
*/
