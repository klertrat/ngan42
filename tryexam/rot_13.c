/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:49:39 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/28 14:30:46 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2 || argv[1] == NULL)
		printf("\n");
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >=  65 && argv[1][i] <= 77)
				argv[1][i] = argv[1][i] + 13;
			else if (argv[1][i] >= 78 && argv[1][i] <= 90)
				argv[1][i] = argv[1][i] - 13;
			else if (argv[1][i] >= 97 && argv[1][i] <= 109)
				argv[1][i] = argv[1][i] + 13;
			else if (argv[1][i] >= 110 && argv[1][i] <= 122)
				argv[1][i] = argv[1][i] - 13;
			i++;
		}
		printf("%s", argv[1]);
	}
	return (0);
}
