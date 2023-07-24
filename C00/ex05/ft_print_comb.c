/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:30:23 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/06 16:30:44 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	unidad;
	char	decena;
	char	centena;

	unidad = 2 + '0';
	decena = 1 + '0';
	centena = 0 + '0';
	while (centena <= '9')
	{
		while (decena <= '9')
		{
			while (unidad <= '9')
			{
				write (1, &(char []){centena, decena, unidad}, 3);
				if (!(centena == '7' && decena == '8' && unidad == '9'))
					write (1, ", ", 2);
				unidad++;
			}
			decena++;
			unidad = decena + 1;
		}
		centena++;
		decena = centena;
	}
}

/*
int main(void) {
	ft_print_comb();
}
*/