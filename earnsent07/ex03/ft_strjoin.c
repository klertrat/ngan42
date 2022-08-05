/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:46:56 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/30 21:14:53 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		i;
	int		d;
	int		s;
	char	*dest;

	dest = (char *)malloc(10000 * sizeof(char));
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
