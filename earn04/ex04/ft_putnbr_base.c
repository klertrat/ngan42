/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:01:11 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/25 21:41:50 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	err(char *base)
{
	int	j;
	int	i;

	i = 0;
	if (ft_strlen(base) > 1)
	{
		while (base[i] != '\0')
		{
			if (base[i] < 32 || base[i] >= 127
				|| base[i] == '+' || base[i] == '-')
				return (0);
			j = i + 1;
			while (base[j] != '\0')
			{
				if (base[i] != base[j])
					j++;
				else
					return (0);
			}
			i++;
		}
		return (1);
	}
	return (0);
}

void	ft_putnbr_baseold(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (err(base) == 1)
	{
		if (nbr == -2147483648)
			nbr = nbr / len;
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -1 * nbr;
			ft_putnbr_baseold(nbr, base);
		}
		else if (nbr < len)
		{
			write(1, &base[nbr], 1);
		}
		else if (nbr >= len)
		{
			ft_putnbr_baseold(nbr / len, base);
			ft_putnbr_baseold(nbr % len, base);
		}
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	a;

	len = ft_strlen(base);
	ft_putnbr_baseold(nbr, base);
	if (nbr == -2147483648)
	{
		a = ((nbr % len) * -1) + '0';
		write(1, &a, 1);
	}
}
/*
int	main(void)
{
	int	nbr = 47483648;
	char	base[] = "012345";
	ft_putnbr_base(nbr, base);
}*/
