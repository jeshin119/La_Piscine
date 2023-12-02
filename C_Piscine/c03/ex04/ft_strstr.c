/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:21:07 by jeshin            #+#    #+#             */
/*   Updated: 2023/09/01 03:53:37 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_substr(char *str, char *find)
{
	while (*find)
	{
		if (*str != *find)
			break ;
		find++;
		str++;
	}
	if (*find == 0)
	{				
		return (1);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == 0)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (check_substr(str, to_find))
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char s1[] = "Hello World";
	char s2[] = "lo";

	char *pos = ft_strstr(s1,s2);
	char *pos1 = strstr(s1,s2);

	printf("%p\n",pos);
	printf("%c\n",*pos);
	printf("The substring is %s\n",pos);

	printf("%p\n",pos1);
	printf("%c\n",*pos1);
	printf("The substring is %s",pos1);
}
*/
