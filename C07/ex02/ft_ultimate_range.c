/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:30:54 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/24 15:01:17 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*aux;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*aux = (int *) malloc(size * sizeof(int));
}