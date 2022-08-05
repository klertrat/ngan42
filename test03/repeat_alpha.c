/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:45:49 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/04 15:18:28 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	repeat(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (str[i] <= 'z' && str[i] >= 'a')
	{
		k = 0;
		j = (str[i] - 96);
		while (k < j)
		{
			write(1, &str[i], 1);
			k++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat(argv[1]);
	}
	return (0);
}
