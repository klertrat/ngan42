/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:21:40 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/27 23:39:44 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*ft(const char *src)
{
	char	*ans;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	ans = (char *)malloc(sizeof(char) * (size));
	if (ans == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		ans[i] = src[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
/*
int	main(void)
{
	char	*ans;

	ans = ft("djldkdk");
	while (*ans != '\0')
	{
		write(1, ans++, 1);
	}
	return (0);
}*/
