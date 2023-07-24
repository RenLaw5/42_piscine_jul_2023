/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:17:52 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/21 13:04:51 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	sign;
	int	num;

	i = 0;
	res = 0;
	sign = 1;
	num = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		i++;
	while (str[i] != '\0' && num != 2)
	{
		if (str[i] != '+' && str[i] != '-')
			num = 1;
		if (num == 1 && !(str[i] >= '0' && str[i] <= '9'))
			num = 2;
		else if (str[i] == '-')
			sign = -sign;
		else if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
int	main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		printf("%d\n", ft_atoi(argv[i]));
	}
}
*/