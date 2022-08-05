/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:54:09 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/05 00:50:53 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	count(char *strs)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (strs[i] != '\0')
	{
		if (strs[i] > 32)
			count++;
		i++;	
	}
	return (count);	
}

char	*ft_word(char *str, int index)
{
	int	i;
	int	len;
	char	*word;

	i = 0;
	len = 0;
	while(str[index] > 32)
	{
		index++;
		len++;
	}
	index = index - len;
	word = (char *)malloc(sizeof(char) * len + 1);
	while (len > 0)
	{
		word[i] = str[index];
		i++;
		index++;
		len--;
	}
	word[i] = '\0';
	return (word);
}

char    **ft_split(char *str)
{
	int	i;
	int	j;
	char	**ans;

	i = 0;
	j = 0;
	ans = (char **)malloc(sizeof(char *) * count(str) + 1);
	while (str[i] != '\0')
	{
		while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
			i++;
		if (i == 0 || (str[i] != '\0' && str[i - 1] <= 32))
		{
			ans[j] = ft_word(str, i);
			j++;
		}
		i++;
	}
	ans[j] = 0;
	return (ans);
}

int	main(int argc, char **argv)
{
	int	index;
	char	**result;

	index = 0;
	if (argc == 2)
	{
		result = ft_split(argv[1]);
		while (result[index])
		{
			printf("%s\n", result[index]);
			index++;
		}
	}
	return (0);
}
