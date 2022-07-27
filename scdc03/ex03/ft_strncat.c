/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:35:40 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/21 16:55:00 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

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

char	*ft_strncpy(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s;
	unsigned int	d;

	i = 0;
	s = ft_strlen(src);
	d = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[i + d] = src[i];
		i++;
	}
	dest[i + d] = '\0';
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	ft_strncpy(dest, src, nb);
	return (dest);
}

/*int	main(void)
{
	char	dest[100] = "program";
	char	*src = "computer";
	//printf("%s\n",strncat(dest, src,5));
	printf("%s",ft_strncat(dest, src,5));
}*/
