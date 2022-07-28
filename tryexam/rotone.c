/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klertrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:32:19 by klertrat          #+#    #+#             */
/*   Updated: 2022/07/28 15:09:58 by klertrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	char	*str;

	i = 0;
	if (argc != 2)
		printf("\n");
	else
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 89)
				|| (argv[1][i] >= 97 && argv[1][i] <= 121))
				str[i] = argv[1][i] + 1;
			else if (argv[1][i] == 90 || argv[1][i] == 122)
				str[i] = argv[1][i] - 25;
			i++;
		}
		printf("%s", str);
		printf("\n");
	}
}	
