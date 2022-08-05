/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:13:05 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/20 12:10:09 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] < 127))
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}

/*int	main(void)
{
	char	t[] = "foo[0 ";
	printf("%d", ft_str_is_printable(t));
}*/
