/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:57:10 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/28 23:30:41 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char s)
{	
	write(1, &s, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2 || argv[1] == NULL)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] <= 32 || argv[1][i] > 126)
			i++;
		while (argv[1][i] > 32 && argv[1][i] <= 126)
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
