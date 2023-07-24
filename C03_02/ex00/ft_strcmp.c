/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:36:59 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/16 18:56:39 by lafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	s1len;
	unsigned int	s2len;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	while (i < s1len || i < s2len)
	{
		c1 = (unsigned char) s1[i];
		c2 = (unsigned char) s2[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	if (s1len == 0 || s2len == 0)
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "Hola mundo";
	char	str2[] = "";
	int		res = strcmp(str1, str2);
	printf("%d\n", res);

	res = ft_strcmp(str1, str2);
	printf("%d\n", res);
	//printf("%d\n", 'H' - 'B');

	return (0);
}
*/