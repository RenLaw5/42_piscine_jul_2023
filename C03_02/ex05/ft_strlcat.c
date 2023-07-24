/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:53:35 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/16 18:56:59 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lendest;
	unsigned int	lensrc;
	unsigned int	lentotal;
	unsigned int	i;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	lentotal = lensrc + lendest;
	i = 0;
	if (size <= lendest)
		return (lensrc + size);
	while (src[i] != '\0' && lendest + i < size - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lentotal);
}
/*
int	main(void)
{
	char	str1[] = "Hola bon dia";
	char	str2[] = "que tal ";
	char	res[255] = "";

	printf("%lu\n", strlcat(res, str1, 5));
	printf("%lu\n", strlcat(res, str2, 3));
	printf("strlcat: %s\n", res);

	char	res2[255] = "";
	printf("%d\n", ft_strlcat(res2, str1, 5));
	printf("%d\n", ft_strlcat(res2, str2, 3));
	printf("ft_strlcat: %s\n", res2);
}
*/