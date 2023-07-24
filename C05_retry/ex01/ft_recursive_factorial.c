/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:35:19 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/19 17:40:24 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		res = nb * ft_recursive_factorial(nb - 1);
		return (res);
	}
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(0));
}
*/