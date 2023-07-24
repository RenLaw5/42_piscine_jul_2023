/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:33:11 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/12 11:55:03 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	lensrc;
	unsigned int	i;

	lensrc = ft_strlen(src);
	i = 0;
	while (i < size - 1 && size > 1)
	{
		if (i <= lensrc - 1)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (lensrc);
}
/*
int	main(void)
{
	char str[] = "abcdefghijklmnopq";
	char dest[10];

	ft_strlcpy(dest, str, 3);
	for (unsigned int i = 0; i < sizeof(dest); i++)
		printf("%d ", dest[i]);
}
*/