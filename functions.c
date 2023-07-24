/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:42:05 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/24 20:20:11 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *searching(char **matrix, int sizex, int sizey, char obst)
{
	int	i;
	int	j;
	int	startx;
	int	starty;
	int size_search;
	int	*res;
	int	obs;

	startx = 0;
	starty = 0;
	res = (int *) malloc(3 * sizeof(int));
	(sizex >= sizey) ? (size_search = sizey) : (size_search = sizex);
	while (1)
	{
		i = startx;
		obs = 0;
		while (i < size_search)
		{
			j = starty;
			while (j < size_search)
			{
				if (matrix[i][j] == obst)
					obs = 1;
				else if (i == size_search - 1 && j == size_search - 1)
				{
					res[0] = startx;
					res[1] = starty;
					res[2] = size_search;
					return (res);
				}
				if (obs == 1)
					break;
				j++;
			}
			i++;
		}
		if (startx + size_search < sizex)
			startx++;
		else if (starty + size_search < sizey)
		{
			startx = 0;
			starty++;
		}
		else
		{
			size_search--;
			startx = 0;
			starty = 0;
		}
		if (size_search == 0)
			return (0);
	}
}

int main(void)
{
	char **matrix = (char **)malloc(3 * sizeof(char *));
	for (int i = 0; i < 3; i++)
	{
		matrix[i] = (char *)malloc(7 * sizeof(char));
	}

	// Inicializamos la matriz
	// Expected 1 2 2
	matrix[0][0] = '0'; matrix[0][1] = '0'; matrix[0][2] = '0'; matrix[0][3] = '1'; matrix[0][4] = '0'; matrix[0][5] = '1'; matrix[0][6] = '0';
    matrix[1][0] = '0'; matrix[1][1] = '1'; matrix[1][2] = '0'; matrix[1][3] = '0'; matrix[1][4] = '0'; matrix[1][5] = '1'; matrix[1][6] = '0';
    matrix[2][0] = '0'; matrix[2][1] = '0'; matrix[2][2] = '0'; matrix[2][3] = '0'; matrix[2][4] = '0'; matrix[2][5] = '0'; matrix[2][6] = '0';

	char obst = '1';
	int *res = searching(matrix, 3, 7, obst);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", res[i]);
	}

	// Liberar memoria asignada para la matriz y el resultado
	for (int i = 0; i < 3; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	free(res);
}