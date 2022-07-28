/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:58:10 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/28 23:53:54 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc != 3)
		printf("\n");
	else
	{
		while (argv[1][i] != '\0')
		{
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					write(1, &argv[1][i], 1);
					break;
				}
				j++;		
			}
		i++;
		}
		printf("\n");
	}
}
