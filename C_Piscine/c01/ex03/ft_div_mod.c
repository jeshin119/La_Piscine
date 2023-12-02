/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:09:54 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/28 22:51:41 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int a=10;
	int b=3;
	int div=0;
	int mod=0;
	ft_div_mod(a,b,&div,&mod);
	printf("div : %d\n",div);
	printf("mod : %d\n",mod);
}*/
