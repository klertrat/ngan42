/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:31:50 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/29 00:02:02 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	size;
	int	i;
	int	j;

	size = ft_strlen(argv[1]);
	i = 1;
	j = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][size - i] == ' ' || argv[1][size - i] == '\t')
		{
			i++;
			j++;
		}
		while (argv[1][size - i] >= 33 && argv[1][size - i] < 127)
			i++;
	}
	while ((size - i + 1) < (size - j))
	{
		write(1, &argv[1][size - i + 1], 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
