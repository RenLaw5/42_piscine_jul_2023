/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lafuente <lafuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:10:07 by lafuente          #+#    #+#             */
/*   Updated: 2023/07/10 15:37:13 by lafuente         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (!((str[i] <= 'z' && str [i] >= 'a')
				|| (str[i] <= 'Z' && str [i] >= 'A')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char frase[] = "Hola Que Tal";
	int resultado = ft_str_is_alpha(frase);
	printf("%d\n", resultado);

	char frase2[] = "HolaQueTal";
	resultado = ft_str_is_alpha(frase2);
	printf("%d\n", resultado);

	char fraseVacia[] = "";
	resultado = ft_str_is_alpha(fraseVacia);
	printf("%d\n", resultado);
}
*/