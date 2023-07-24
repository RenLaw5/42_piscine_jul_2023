/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:20:41 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/24 12:42:29 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (nb);
	i = 1;
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

//46340 is the biggest sqrt given by an int number
/*
int	main(void)
{
	printf("%d", ft_sqrt(2147483647));
}
*/