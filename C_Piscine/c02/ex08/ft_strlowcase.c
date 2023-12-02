/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:19:53 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/31 19:13:22 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ret;

	ret = str;
	while (*str != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 'a' - 'A';
		str++;
	}
	return (ret);
}
/*
#include <stdio.h>
int	main()
{
	char p1[] = "HELLO";
	printf("%s -> ",p1);
	ft_strlowcase(p1);
	printf("%s\n",p1);

	char p2[] = "1H2E3L4L5O";
	printf("%s -> ",p2);
	ft_strlowcase(p2);
	printf("%s\n",p2);

	char p3[] = "!H@E#L$L%O";
	printf("%s -> ",p3);
	ft_strlowcase(p3);
	printf("%s\n",p3);

	char p4[] = "";
	printf("%s -> ",p4);
	ft_strlowcase(p4);
	printf("%s\n",p4);
}
*/
