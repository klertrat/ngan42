/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:13:24 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/02 19:46:48 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	findsep(char *strs, int index)
{
	while (strs[index] != '\0')
	{
		if (strs[index] <= 32)
			return (index);
		index++;
	}
	return (0);
}

int	len(char *str)
{
	int	o;
	int	u;

	o = 0;
	u = 0;
	while (str[o])
	{
		o++;
		if (str[o] <= 32)
			u++;
	}
	return (o - u);
}

char    **ft_split(char *str)
{
	int	i;
	char	**dest;
	int	j;
	int	k;
	int	d;

	i = 0;
	j = 0;
	dest = (char **)malloc(sizeof(char) * len(str));
	while (str[i] != '\0')
	{
		k = 0;
		d = findsep(str, i);
		while (d > i)
		{
			dest[j][k] = str[d];
			k++;
			d--;
		}
		i++;
		j++;
	}
	return (dest);
}

int	main(int argc, char **argv)
{
	char	**ans;
	int	i;
	int	j;

	ans = ft_split(argv[1]);
	i = 0;
	if (argc == 2)
	{
		while (ans[i])
		{
			j = 0;
			while(ans[i][j])
			{
				printf("%c", ans[i][j]);
				j++;
			}
			i++;
		}
	}
	return (0);
}
