/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:10:21 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/24 13:27:06 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	size;
	int	i;
	int	aux;

	size = max - min;
	if (min >= max)
		return (NULL);
	res = (int *) malloc(size * sizeof(int));
	if (res == NULL)
		return (NULL);
	i = 0;
	aux = min;
	while (aux < max)
	{
		res[i] = aux;
		i++;
		aux++;
	}
	return (res);
}
