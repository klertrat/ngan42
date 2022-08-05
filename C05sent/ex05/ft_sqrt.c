/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:48:27 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/26 15:43:14 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int			be;
	long long	mid;
	int			end;

	be = 0;
	end = nb;
	while (be <= end)
	{
		mid = (be + end) / 2;
		if (mid * mid > nb)
			end = mid - 1;
		else if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			be = mid + 1;
	}
	return (0);
}

int	main(void)
{
	printf("ans = %d\n", ft_sqrt(2147395600));
}
