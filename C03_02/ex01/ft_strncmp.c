/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:26:16 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/18 14:23:38 by lafuente         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	s1len;
	unsigned int	s2len;
	unsigned int	cmpv;

	i = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (s1len >= s2len)
		cmpv = s1len;
	else
		cmpv = s2len;
	while (i < n && i < cmpv)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1len == 0 && n != 0)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "Hola mundos";
	char	str2[] = "Hola mundo";
	int		res = strncmp(str1, str2, 15);
	printf("%d\n", res);

	int		res_mi_funcion = ft_strncmp(str1, str2, 15);
	printf("%d\n", res_mi_funcion);
	//printf("%d\n", 'a' - 'o');

	return (0);
}
*/