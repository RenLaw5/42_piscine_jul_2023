/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:35:03 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/16 18:56:50 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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

	printf("%s\n", strcat(res, str1));
	printf("%s\n", strcat(res, str2));
	printf("strcat: %s\n", res);

	char	res2[255] = "";
	printf("%s\n", ft_strcat(res2, str1));
	printf("%s\n", ft_strcat(res2, str2));
	printf("ft_strcat: %s\n", res2);
}
*/