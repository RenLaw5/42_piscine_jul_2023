/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:01:17 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/24 13:12:29 by lafuente         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	aux;

	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	if (nb % 2 == 0)
		aux = nb + 1;
	else
		aux = nb;
	while (ft_is_prime(aux) != 1)
	{
		aux += 2;
	}
	return (aux);
}
