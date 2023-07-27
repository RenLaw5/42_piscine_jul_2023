/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrixgenerator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:40:08 by irubio-m          #+#    #+#             */
/*   Updated: 2023/07/26 18:23:33 by irubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char	*fila(char *content, int *index, int column)
{
	char	*row;
	int		j;

	j = 0;
	row = malloc(column + 1);
	while (content[*index] != '\n' && content[*index] !=  '\0')
	{
		row[j] = content[*index];
		(*index)++;
		j++;
	}
	row[j] = '\0';
	return (row);
}

char	**matrix(char *content, char arguments, int column)
{
	int	i;
	int	size;
	int	j;
	char	**matrix;

	i = ft_strlen(arguments) + 2;
	j  = 0;
	size =  rowsnumber(arguments);
	matrix = (char **)malloc((size + 1) * 8);
	while (content[i] != '\0')
	{
		matrix[j] = fila(content, &i, column);
		i++;
		j++;
	}
	matrix[j] = NULL;
	return (matrix);
}

int	main(void)
{
	char	*c;
	char	*a;
	char 	**m;
	char arg[] = "matrix.txt";

	c = mapextract(arg);
	printf("%ld\n", c);
	//a = arguments(c);
	//printf(".\n");
	//m = matrix(c, a, 16);
	//printf(".\n");
	return (0);
}
