/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:21:17 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/13 14:10:33 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "Hola ";
	char	str2[] = "que tal ";
	char	res[255] = "";

	printf("%s\n", strncat(res, str1, 3));
	printf("%s\n", strncat(res, str2, 5));
	printf("strncat: %s\n", res);

	char	res2[255] = "";
	printf("%s\n", ft_strncat(res2, str1, 3));
	printf("%s\n", ft_strncat(res2, str2, 5));
	printf("ft_strncat: %s\n", res2);
}
*/