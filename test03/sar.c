/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sar.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:59:07 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/04 16:27:41 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

void	search_and_replace(char *str, char *a, char *b)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a[0])
		{
			write(1, &b[0], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4 && (argv[2][0] >= 'a' && argv[2][0] <= 'z') && \
		argv[2][1] == '\0' && (argv[3][0] >= 'a' && argv[3][0] <= 'z')
		&& argv[3][1] == '\0')
	{
		search_and_replace(argv[1], argv[2], argv[3]);
	}
	write(1, "\n", 1);
}
