/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaalonso <jaalonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:09:04 by jaalonso          #+#    #+#             */
/*   Updated: 2023/07/09 11:48:30 by jaalonso         ###   ########.fr       */
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
			if ((row == 1 && col == 1) || (row == y && col == x))
				ft_putchar('/');
			else if ((row == 1 && col == x) || (row == y && col == 1))
				ft_putchar('\\');
			else if (row == 1 || col == 1 || row == y || col == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		col = 1;
		row++;
		ft_putchar('\n');
	}
}
