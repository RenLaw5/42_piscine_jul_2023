/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:57:08 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/09 17:10:18 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a = 11;
	int b = 5;
	int c = 0;
	int d = 0;
	int *div = &c;
	int *mod = &d;

	printf("a = %d\nb = %d\ndiv = %d\nmod = %d\n", a, b, *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf("a = %d\nb = %d\ndiv = %d\nmod = %d\n", a, b, *div, *mod);
}
*/