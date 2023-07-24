/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:21:31 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/06 16:49:04 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n >= 0)
		write (1, &pos, 1);
	else
		write (1, &neg, 1);
}

/*
int main(void) {
	//Expected: PPNPNN
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-1);
	ft_is_negative(100000);
	ft_is_negative(-342352);
	ft_is_negative(-4324);
	return 0;
} 
*/