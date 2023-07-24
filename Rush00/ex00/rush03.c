/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaalonso <jaalonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:09:04 by jaalonso          #+#    #+#             */
/*   Updated: 2023/07/09 11:43:32 by jaalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	while (row <= y && !(y <= 0 || x <= 0))
	{
		while (col <= x)
		{
			if ((row == 1 && col == 1) || (col == 1 && row == y))
				ft_putchar('A');
			else if ((row == 1 && col == x) || (row == y && col == y))
				ft_putchar('C');
			else if (row == 1 || col == 1 || row == y || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		col = 1;
		row++;
		ft_putchar('\n');
	}
}
