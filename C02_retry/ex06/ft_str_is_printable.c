/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:00:14 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/10 16:36:21 by lafuente         ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char frase[] = "Hola\tQue Tal";
	int resultado = ft_str_is_printable(frase);
	printf("%d\n", resultado);

	char frase2[] = "Hola\nQue\nTal";
	resultado = ft_str_is_printable(frase2);
	printf("%d\n", resultado);

	char frase3[] = "HOLAQUETAL";
	resultado = ft_str_is_printable(frase3);
	printf("%d\n", resultado);

	char fraseVacia[] = "";
	resultado = ft_str_is_printable(fraseVacia);
	printf("%d\n", resultado);
}
*/