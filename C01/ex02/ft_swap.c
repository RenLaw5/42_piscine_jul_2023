/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:33:57 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/09 16:57:16 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
int	main(void)
{
	int a = 10;
	int b = 20;
	printf("a = %d\nb = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d\nb = %d", a, b);
}
*/