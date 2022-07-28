/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:27:50 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/28 19:37:36 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	no_meat_b4(char *str)
{
	int	i;
	int	j;

	while (str[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if )
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	a;
	int	b;
	char	str[10000];
	
	(void)argc;
	i = 0;
	a = 0;
	while (argv[1][j] != '\0')
	{
		if (str[a] != argv[1][i])
		{
			str[a] = argv[1][i];
		}
		j++;
		a++;
	}
	i = 0;
	b = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != argv[2][j] && argv[2][j] != '\0')
		{
			if (str[b] != argv[1][i])
			{
				str[a] = argv[2][j];
			}
			j++;
			a++;
		}
		i++;
	}
	ft_putstr(str);	
}
