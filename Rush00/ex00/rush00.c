/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaalonso <jaalonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:15:59 by jaalonso          #+#    #+#             */
/*   Updated: 2023/07/08 14:04:41 by jaalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	fil;

	col = 1;
	fil = 1;
	while (fil <= y && !(x <= 0 || y <= 0))
	{
		while (col <= x)
		{
			if ((col == 1 && fil == 1) || (col == x && fil == 1)
				|| (col == 1 && fil == y) || (col == x && fil == y))
				ft_putchar('o');
			else if (fil == 1 || fil == y)
				ft_putchar('-');
			else if (col == 1 || col == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		col = 1 ;
		fil++;
	}
}
