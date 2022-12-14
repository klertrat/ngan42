/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:04:40 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/27 15:47:19 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	i;
	unsigned char	j;

	i = '0';
	j = '0';
	while (i == j)
	{
		i = *s1++;
		j = *s2++;
		if (i == '\0')
			return (i - j);
	}
	return (i - j);
}

int	main(void)
{
	char r[] = "t";
	char y[] = "T";
	printf("%d\n",strcmp(r,y));
	printf("new:%d",ft_strcmp(r,y));
}
