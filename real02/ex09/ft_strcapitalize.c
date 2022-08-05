/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:44:08 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/20 17:35:42 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	condi(int i, char *str)
{
	if ((str[i - 1] >= 32 && str[i - 1] <= 47)
		|| (str[i - 1] >= 58 && str[i - 1] <= 64)
		|| (str[i - 1] >= 91 && str[i - 1] <= 96)
		|| (str[i - 1] >= 123 && str[i - 1] <= 126))
		str[i] = str[i] - 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[0] = str[0] - 32;
			condi(i, str);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i == 0)
				str[i] = str[i];
			else
				str[i] = str[i] + 32;
			condi(i, str);
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char b[] = "Alut, comment tu v*as ? 42mots quarante-deux; [w[W<r>Re+et+un";
	printf("%s\n", b);
	printf("new :%s", ft_strcapitalize(b));
}
