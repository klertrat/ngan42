/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:07:04 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/27 15:46:09 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	const char	*last;

	a = 0;
	while(*s != '\0')
	{
		if (*s == c)
		{
			last = s;
			a = 1;
		}
		s++;
	}
	if (*s == c)
		return ((char *)s);
	if (a == 0)
		return (NULL);
	return ((char *)last);
}
/*
int	main(void)
{
	printf("%s\n", strrchr("hfhg", 'f'));
	printf("%s\n", ft_strrchr("hfhg", 'f'));
	return (0);
}*/
