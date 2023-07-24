/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:55:03 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/10 16:36:00 by lafuente         ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (!(str[i] <= 'Z' && str [i] >= 'A'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char frase[] = "Hola Que Tal";
	int resultado = ft_str_is_uppercase(frase);
	printf("%d\n", resultado);

	char frase2[] = "HolaQueTal";
	resultado = ft_str_is_uppercase(frase2);
	printf("%d\n", resultado);

	char frase3[] = "HOLAQUETAL";
	resultado = ft_str_is_uppercase(frase3);
	printf("%d\n", resultado);

	char fraseVacia[] = "";
	resultado = ft_str_is_uppercase(fraseVacia);
	printf("%d\n", resultado);
}
*/