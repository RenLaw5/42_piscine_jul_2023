/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:29:32 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/10 16:57:16 by lafuente         ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (str[i] <= 'z' && str [i] >= 'a')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "Hola Que Tal";
	char *mayus = ft_strupcase(str);
	printf("%s", mayus);
}
*/