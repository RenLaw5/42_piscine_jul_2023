/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:10:01 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/09 17:32:33 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int a = 11;
	int b = 5;
	int *c = &a;
	int *d = &b;

	printf("a = %d\nb = %d\n", *c, *d);
	ft_ultimate_div_mod(c, d);
	printf("a = %d\nb = %d\n", *c, *d);
}
*/