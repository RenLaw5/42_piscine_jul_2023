/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:59:17 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/10 17:28:37 by lafuente         ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (str[i] <= 'Z' && str [i] >= 'A')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "Hola Que Tal";
	char *minus = ft_strlowcase(str);
	printf("%s", minus);
}
*/