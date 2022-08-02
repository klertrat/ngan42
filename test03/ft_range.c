/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:23:40 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/02 17:24:07 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_abs(int start, int end)
{
	if(end - start < 0)
		return ((end - start) * -1);
	return (end - start);
}

int	*ft_range(int start, int end)
{
	int	*rub;
	int	len;
	int	i;
	int	temp;

	i = 0;
	temp = start;
	len = ft_abs(start, end);
	rub = (int *)malloc(sizeof(int) * len);
	if (start = end)
		return (start);
	while (start >= end)
	{
		rub[i] = start;
		i++;
		//printf("%d", start);
		start--;
	}
	start = temp;
	while (start <= end)
	{
		rub[i] = start;
		i++;
		//printf("%d", start);
		start++;
	}
	return (rub);
}

int	main(void)
{
	ft_range(4, 4);
	return (0);
}
