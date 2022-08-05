/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splittry.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:24:48 by klertrat          #+#    #+#             */
/*   Updated: 2022/08/05 00:49:35 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	count(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] !=  '\0')
	{
		if (str[i] > 32)
			count++;
		i++;
	}
	return (count);
}

char	*find_word(char *str, int index)
{
	int	i;
	int	len;
	char	*word;

	i = 0;
	len = 0;
	while (str[index] > 32)
	{
		len++;
		index++;
	}
	index = index - len;
	word = (char *)malloc(sizeof(char) * len + 1);
	while (len > 0)
	{
		word[i] = str[index];
		index++;
		i++;
		len--;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int	i;
	int	j;
	char	**ans;

	i = 0;
	j = 0;
	ans = (char **)malloc(sizeof(char *) * count(str) + 1);
	while (str[i] != '\0')
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (i == 0 || (str[i] != '\0' && str[i - 1] <= 32 ))
		{
			ans[j] = find_word(str, i);
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
