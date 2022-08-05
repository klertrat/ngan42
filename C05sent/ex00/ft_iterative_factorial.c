/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:39:10 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/26 15:38:54 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (nb >= 1)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(11));
}
