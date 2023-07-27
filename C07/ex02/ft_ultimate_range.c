/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:30:54 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/24 16:46:28 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*aux;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	aux = (int *) malloc(size * sizeof(int));
	if (aux == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		aux[i] = min;
		min++;
		i++;
	}
	*range = aux;
	return (i);
}
