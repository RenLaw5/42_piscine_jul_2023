/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:41:59 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/20 15:43:16 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	i = 0;
	res = 1;
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(5, 5));
}
*/