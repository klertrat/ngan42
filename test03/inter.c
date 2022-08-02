/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:16:12 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/02 14:51:13 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_check(char cha, char *str, int index)
{
	int	l;

	l = 0;
	while (l < index)
	{
		if (str[l] == cha)
			return (0);
		l++;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				if ((ft_check(s1[i], s1, i) == 1))
					write(1, &s1[i], 1);
				break ;
			}
			j++;
		}
		i++;
	}	
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
