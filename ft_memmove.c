/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:48:27 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/28 09:13:20 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char const	*ls;
	char	*ld;
	char	*d;
	char const	*s;

	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		ls = s + (len - 1);
		ld = d + (len - 1);
		while (len--)
			*ld-- = *ls--;
	}
	return ((char *)dst);
}
/*
int	main(void)
{
	printf("%s", ft_memmove("Hello", "sandy", sizeof("sandy")));
}
int	main ()
{
	char dest[] = "oldstring";
	const char src[]  = "newstring";
	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);
	return(0);
}*/
