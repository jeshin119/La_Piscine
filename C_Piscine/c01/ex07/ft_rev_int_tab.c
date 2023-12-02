/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_swap.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:04:19 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/28 22:49:58 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	count;

	start = 0;
	temp = 0;
	count = size / 2;
	while (count--)
	{
		if (*(tab + start) < 0)
		{
			*(tab + start) *= -1;
			*(tab + size -1 - start) *= -1;
		}
		temp = *(tab + start);
		*(tab + start) = *(tab + size -1 - start);
		*(tab + size -1 - start) = temp;
		start++;
	}
}
/*
int main(){
	//for문 ft_rev_int_tab함수로 cut
	for(int i=0;i<size;i++)
	{
		printf("%d",*(tab+i));
	}
	//
	int a[5] = {5,4,3,2,1};
	ft_rev_int_tab(a,5);
	printf("\n");

	int f[5] = {3,2,1};
	ft_rev_int_tab(f,3);
	printf("\n");
	int b[5] = {-1,2,3,4,5};
	ft_rev_int_tab(b,5);
	printf("\n");

	int c[10] = {2,1,4,7,4,8,3,6,4,7};
	ft_rev_int_tab(c,10);
	printf("\n");

	int d[10] = {-2,1,4,7,4,8,3,6,4,8};
	ft_rev_int_tab(d,10);
	printf("\n");
}*/
