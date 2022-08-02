/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:28:50 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/01 15:18:39 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	len(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	han(int len)
{
	int	result;

	result = 1;
	while (len > 1)
	{
		result *= 10;
		len--;
	}
	return (result);
}

char	*ft_itoa(int nbr)
{
	char	*ans;
	int	lens;
	int	len2;
	int	i;

	ans = (char *)malloc(sizeof(char) * (len(nbr) + 1));
	lens = len(nbr);
	len2 = lens;
	i = 0;
	if (ans == NULL)
		return (NULL);
	if (nbr == -2147483648)
		return("-2147483648");
	if (nbr < 0)
	{
		ans[0] = '-';
		nbr *= -1;
		i++;
	}
	while (i < len2)
	{
		ans[i] = ((nbr / han(lens)) % 10) + '0';
		lens--;
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

int	main(void)
{
	printf("%s", ft_itoa(1234));
}
