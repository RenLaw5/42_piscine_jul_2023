/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:25:38 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/19 17:02:13 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	ft_bubble_sort(char *arr[], int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size - i - 1)
		{
			if (arr[j][0] > arr[j + 1][0])
				swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
		j = 0;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	ft_bubble_sort(argv + 1, argc - 1);
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		i++;
		j = 0;
		write (1, "\n", 1);
	}
}
