/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:06:33 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/27 14:08:32 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *a)
{
	int	k;

	k = 0;
	while (a[k] != '\0')
	{
		write(1, &a[k], 1);
		k++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
		{	
			break;
		}
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	sort(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j < argc - 1)
	{
		i = j + 1;
		while (ft_strcmp(argv[j] ,argv[i]) > 0 && i <= argc)
		{	
			ft_swap(&argv[j], &argv[i]);
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 2)
	{
		sort(argv, argc);
	}
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
