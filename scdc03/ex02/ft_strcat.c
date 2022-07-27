/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:57:42 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/21 16:55:42 by klertrat         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	s;
	int	d;

	i = 0;
	s = ft_strlen(src);
	d = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[i + d] = src[i];
		i++;
	}
	dest[i + d] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	ft_strcpy(dest, src);
	return (dest);
}

/*int	main(void)
{
	char	dest[100] = "program";
	char	*src = "computer";
	//printf("%s\n",strcat(dest, src));
	printf("%s",ft_strcat(dest, src));
}*/
