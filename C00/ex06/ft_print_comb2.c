/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:10:03 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/15 16:51:00 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	s;
	int	a;

	s = 0;
	a = 0;
	while (s <= 98)
	{
		a = s + 1;
		while (a <= 99)
		{
			ft_putchar(s / 10 + '0');
			ft_putchar(s % 10 + '0');
			write(1, " ", 1);
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			if (s < 98)
			{
				write(1, ", ", 2);
			}
			a++;
		}
		s++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
