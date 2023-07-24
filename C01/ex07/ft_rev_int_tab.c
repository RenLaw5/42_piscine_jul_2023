/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:13:24 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/09 20:47:44 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	while (i < size / 2)
	{
		start = tab[i];
		end = tab[size - i - 1];
		tab[i] = end;
		tab[size - i - 1] = start;
		i++;
	}
}
/*
int	main(void)
{
	int size = 5;
	int tab[size];
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	ft_rev_int_tab(tab, size);
	printf("%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
*/