/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:28:16 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/28 22:35:50 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}	
/*#include <stdio.h>
int main()
{
	int quotient=10;
	int remainder=3;
	ft_ultimate_div_mod(&quotient,&remainder);
	printf("10/3  quotient : %d\n",quotient);
	printf("10/3  remainder : %d\n",remainder);
	return 0;
}*/
