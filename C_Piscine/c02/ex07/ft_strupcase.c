/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:10:12 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/31 19:12:25 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*ret;

	ret = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= ('a' - 'A');
		str++;
	}
	return (ret);
}
/*
#include <stdio.h>
int	main()
{
	char p1[] = "hello";
	printf("%s -> ",p1);
	printf("%s\n",ft_strupcase(p1));
	
	char p2[] = "1h2e3l4l5o";
	printf("%s -> ",p2);
	printf("%s\n",ft_strupcase(p2));
}
*/
