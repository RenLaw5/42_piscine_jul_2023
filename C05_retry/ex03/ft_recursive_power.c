/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:50:14 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/20 15:03:41 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(0, 5));
}
*/