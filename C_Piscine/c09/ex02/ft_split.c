/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:32:25 by jeshin            #+#    #+#             */
/*   Updated: 2023/09/10 10:17:38 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char *str, char *charset)
{
	while (*charset)
	{
		if (*str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	get_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (*str)
	{
		if (!is_in_charset(str, charset))
			len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *str, char *charset)
{
	int		len_each;
	int		i;
	char	*temp;

	len_each = 0;
	i = 0;
	while (str[i] && !is_in_charset(&str[i], charset))
	{
		len_each++;
		i++;
	}
	temp = (char *)malloc(sizeof(char) * len_each + 1);
	i = 0;
	while (str[i] && !is_in_charset(&str[i], charset))
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}

char	**cpy_n_split(char *str, char *charset, int len_net)
{
	char	**ret;
	char	*temp;
	int		i;

	i = 0;
	ret = (char **)malloc(sizeof(char *) * (len_net + 1));
	while (*str)
	{
		while (*str && is_in_charset(str, charset))
		{
			str++;
		}
		if (*str && !is_in_charset(str, charset))
		{
			temp = ft_strdup(str, charset);
			ret[i] = temp;
			i++;
			while (*str && !is_in_charset(str, charset))
				str++;
		}
	}
	ret[i] = 0;
	return (ret);
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	int		len_net;

	len_net = get_len(str, charset);
	ret = cpy_n_split(str, charset, len_net);
	return (ret);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**arr_str = ft_split(" A - B - !C!  ","-  !");
	while(*arr_str)
	{
		printf("%s",*arr_str);
		arr_str++;
	}
}
*/
