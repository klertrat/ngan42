/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:07:50 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/21 15:53:36 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	i;
	unsigned char	j;

	i = '0';
	j = '0';
	while (i == j && n > 0)
	{
		i = *s1++;
		j = *s2++;
		if (i == '\0')
			return (i - j);
		n--;
	}
	return (i - j);
}

/*int	main(void)
{
	char r[] = "hn\200ei";
	char y[] = "hn\0";
	printf("%d\n",strncmp(r,y,4));
	printf("new:%d",ft_strncmp(r,y,4));
}*/
