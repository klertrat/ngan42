/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:55:53 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/04 21:35:53 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	len;
	int	length;
	int	p;

	len = 0;
	length = 0;
	if (argc == 2)
	{
		while (argv[1][length] != '\0')
		{
			length++;
		}
		i = length - 1;
		while (argv[1][i] == 32 || argv[1][i] == '\t')
		{
			i--;
		}
		while (argv[1][i] > 32 && argv[1][i] < 127)
		{
			i--;
			len++;
		}
		p = i + len;
		while (i < p)
		{
			write(1, &argv[1][i + 1], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
