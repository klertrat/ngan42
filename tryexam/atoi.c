/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:38:00 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/28 23:52:30 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	is_negative(const char *str)
{
	int	i;
	int	ngt;

	ngt = 1;
	i = 0;
	while (str[i] == '-')
	{
		ngt *= -1;
	}
	return (ngt);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int 	ngt;

	ngt = is_negative(str);
	i = 0;
	result = 0;
	while (str[i] != '\0' )
	{
		while (str[i] <= 32)
			i++;
		while (str[i] == '+' || str[i] == '-')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
		return (result * ngt);
	}
	return (0);
}

int	main(void)
{
	char str[] = "12472";
	printf("%d\n",ft_atoi(str));
}
