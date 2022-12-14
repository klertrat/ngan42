/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:41:58 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/26 15:40:25 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0 && nb == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (power > 0)
	{
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_iterative_power(2, 10));
}
