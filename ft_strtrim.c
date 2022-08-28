/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:22:20 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/28 10:19:30 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
#include<stdlib.h>

char	lens(char const *s1, char const *set)
{
	int		i;
	int		k;
	size_t	q;
	size_t	onoff;

	i = 0;
	k = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i++] != '\0')
	{
		q = 0;
		onoff = 0;
		while (q < ft_strlen(set))
		{
			if (s1[i] == set[q])
				onoff = 1;
			q++;
		}
		if (onoff == 0)
			k++;
	}
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	q;
	size_t	onoff;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(lens(s1, set));
	if (!str)
		return (NULL);
	while (s1[i++] != '\0')
	{
		q = 0;
		onoff = 0;
		while (q < ft_strlen(set))
		{
			if (s1[i] == set[q++])
				onoff = 1;
		}
		if (onoff == 0)
			str[j++] = s1[i];
	}
	str[j] = '\0';
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("   \t   \n\n \t\t \n\n kdjk fko\n jkd", "fko  kfi"));
	return (0);
}*//*
int main()
{
	printf("%s\n", ft_strtrim("abgo\n \nkbc", "abc"));
	printf("%s\n", ft_strtrim("xavocad\toyz", "xyz"));
	return 0;
}*/
