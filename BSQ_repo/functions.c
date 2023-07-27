/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:42:05 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/26 16:13:12 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

//vars[0] == position x;
//vars[1] == position y;
//vars[2] == searching size;
//vars[3] == max size x;
//vars[4] == max size y;

int	*next_pos(int *vars)
{
	if (vars[1] + vars[2] < vars[4])
		vars[1]++;
	else if (vars[0] + vars[2] < vars[3])
	{
		vars[1] = 0;
		vars[0]++;
	}
	else
	{
		vars[2]--;
		vars[0] = 0;
		vars[1] = 0;
	}
	return (vars);
}

int	solve(char **matrix, int *vars, char obst)
{
	int	i;
	int	j;

	i = vars[0];
	while (i - vars[0] < vars[2])
	{
		j = vars[1];
		while (j - vars[1] < vars[2])
		{
			if (matrix[i][j] == obst)
				return (0);
			else if (i - vars[0] == vars[2] - 1 && j - vars[1] == vars[2] - 1)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	*searching(char **matrix, int sizex, int sizey, char obst)
{
	int	*vars;

	vars = (int *) malloc(5 * sizeof(int));
	vars[0] = 0;
	vars[1] = 0;
	vars[3] = sizex;
	vars[4] = sizey;
	if (vars[3] >= vars[4])
		vars[2] = vars[4];
	else
		vars[2] = vars[3];
	while (1)
	{
		if (solve(matrix, vars, obst) == 1)
			return (vars);
		vars = next_pos(vars);
		if (vars[2] == 0)
			return (0);
	}
}

void	print_matrix(char **matrix, int *vars, char fill)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < vars[3])
	{
		while (j < vars[4])
		{
			if (i < vars[2] + vars[0] && i >= vars[0]
				&& j < vars[2] + vars[1] && j >= vars[1])
				write(1, &fill, 1);
			else
				write(1, &matrix[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
	}
}
