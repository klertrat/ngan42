/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:56:42 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/19 11:45:15 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	g;
	int	l;
	int	a;

	g = 0;
	l = size - 1;
	while (l >= 0 && g <= size / 2)
	{
		a = *(tab + l);
		*(tab + l) = *(tab + g);
		*(tab + g) = a;
		l--;
		g++;
	}
	g = 0;
	while (g <= size -1)
	{
		ft_putchar (*(tab + g) + '0');
		g++;
	}
}

/*int	main(void)
{
	int	tab[5] = {2, 7, 8, 4, 8};
	ft_rev_int_tab(tab, 5);
	return(0);
}*/
