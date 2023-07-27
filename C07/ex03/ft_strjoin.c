/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:40:15 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/27 15:57:55 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_size(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < size)
	{
		res += ft_strlen(strs[i]);
		if (i != size - 1)
			res += ft_strlen(sep);
		i++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	pos;
	char	*res;

	res = malloc (total_size(size, strs, sep) * sizeof (char));
	i = 0;
	pos = 0;
	while (i < size)
	{
		j = 0;
		while (j < ft_strlen(strs[i]))
			res[pos++] = strs[i][j++];
		if (i != size - 1)
		{
			j = 0;
			while (j < ft_strlen(sep))
				res[pos++] = sep[j++];
		}
		i++;
	}
	return (res);
}
/*
int	main(int argc, char *argv[])
{
	char	*res = ft_strjoin(argc, argv, " ");
	printf("%s", res);
	free(res);
	system("leaks -q a.out");
}
*/