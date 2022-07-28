/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:33:55 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/28 18:55:16 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	n;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	n = 0;
	if (argc != 3)
		write(1, "\n",  1);
	else
	{
		while (argv[1][k] != '\0')
			k++;
		while (argv[1][i] != '\0')
		{
			while (argv[1][i] != argv[2][j] && argv[2][j] != '\0')
			{
				j++;
			}
			if (argv[1][i] == argv[2][j])
			{
				n++;
				j++;
			}
			i++;
		}
		i = 0;
		if (k == n)
		{
			while (argv[1][i] != '\0')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
		write(1, "\n", 1);
	}
}
