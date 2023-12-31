/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:43:46 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/24 13:13:01 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= 46340 && i * i < nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
