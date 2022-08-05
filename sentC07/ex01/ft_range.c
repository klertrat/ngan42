/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:24:57 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/27 23:37:19 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*ans;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	ans = (int *)malloc(sizeof(int) * size);
	if (min >= max)
		return (NULL);
	else if (ans != NULL)
	{
		while (min < max)
		{
			ans[i] = min++;
			i++;
		}
	}
	return (ans);
}
/*
int	main(void)
{
	int index;
	int	size;
	int	*ans = ft_range(300,310);

	size = 10;
	index = 0;
	while (index < size)
	{
		printf("%d", ans[index]);
		index++;
	}
}*/
