/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:29:07 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/27 19:56:06 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include"libft.h"

int	lens(char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i][j] != '\0')
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			j++;
		}
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		i;
	int		d;
	int		s;
	char	*dest;

	dest = malloc(lens(strs) + (ft_strlen(sep) * (size - 1)));
	i = 1;
	s = 0;
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		d = 0;
		a = 0;
		while (strs[i][d] != '\0')
			dest[s++] = strs[i][d++];
		if (i < size - 1)
		{
			while (sep[a] != '\0')
				dest[s++] = sep[a++];
		}
		i++;
	}
	return (dest);
}
/*
int	main(int argc,char **argv)
{
	char	*dest;
	char	sep[] = " , ";
	dest = ft_strjoin(argc, argv, sep);
	printf("%s", dest);
	return (0);
}*/
