/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:06:21 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/19 12:22:45 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	r;

	r = 0;
	while (*str != '\0')
	{
		r++;
		str++;
	}
	return (r);
}

/*int	main(void)
{
	int	r;
	char	str[] = "Fir st\0";

	r = ft_strlen(str);
	r = r + '0';
	write (1, &r, 1);
	return (0);
}*/
